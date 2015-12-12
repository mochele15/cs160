#include "codegeneration.hpp"

// CodeGenerator Visitor Functions: These are the functions
// you will complete to generate the x86 assembly code. Not
// all functions must have code, many may be left empty.



void CodeGenerator::visitProgramNode(ProgramNode* node) {
  // WRITEME: Replace with code if necessary
  std::cout << " .data" << std::endl;
  std::cout << " printstr: .asciz \"%d\\n\"" << std::endl;
  std::cout << " .text" << std::endl;
  std::cout << " .globl Main_main" << std::endl;

  node->visit_children(this);
}

void CodeGenerator::visitClassNode(ClassNode* node) {
  // WRITEME: Replace with code if necessary
  currentClassName = node->identifier_1->name;
  currentClassInfo = (*classTable)[currentClassName];
  node->visit_children(this);
}

void CodeGenerator::visitMethodNode(MethodNode* node) {
  currentMethodName = node->identifier->name;
  currentMethodInfo = currentClassInfo.methods -> find(currentMethodName)->second;
  std::cout << "   "<<currentClassName <<"_"<< currentMethodName << ":" << std::endl;
  node ->visit_children(this);
  // WRITEME: Replace with code if necessary
}

void CodeGenerator::visitMethodBodyNode(MethodBodyNode* node) {
  std::cout << "  push %ebp" << std::endl;
  std::cout << "  mov %esp, %ebp" << std::endl;
  std::cout << "  sub $" << currentMethodInfo.localsSize <<", %esp" << std::endl;

  node->visit_children(this);

  std::cout << "  leave" << std::endl;
  std::cout << "  ret" << std::endl; 
}

void CodeGenerator::visitParameterNode(ParameterNode* node) {
  // WRITEME: Replace with code if necessary
}

void CodeGenerator::visitDeclarationNode(DeclarationNode* node) {
  // WRITEME: Replace with code if necessary
}

void CodeGenerator::visitReturnStatementNode(ReturnStatementNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
  std::cout << " pop %eax" << std::endl;
}

void CodeGenerator::visitAssignmentNode(AssignmentNode* node) {
    node->visit_children(this);
    std::cout << "  pop %eax"<< std::endl;
    if (node->identifier_2 == NULL) {
        if (currentMethodInfo.variables->count(node->identifier_1->name) > 0) {
            std::cout << "  mov %eax, " << currentMethodInfo.variables->find(node->identifier_1->name)->second.offset<<"(%ebp)"<< std::endl;
        } else {
            std::cout << "  mov 8(%ebp), %edx" << std::endl;
            std::cout << "  mov %eax, " << currentClassInfo.members->find(node->identifier_1->name)->second.offset<<"(%edx)"<< std::endl;

        }
    } else {
        VariableInfo objectInfo;
        if (currentMethodInfo.variables->count(node->identifier_1->name) > 0) {
            objectInfo = currentMethodInfo.variables->find(node->identifier_1->name)->second;
        } else {
            objectInfo = currentClassInfo.members->find(node->identifier_1->name)->second;
        }
        std::cout << "  mov " << objectInfo.offset <<"(%ebp), %edx" << std::endl;
        int memberoffset = classTable->find(objectInfo.type.objectClassName)->second.members->find(node->identifier_2->name)->second.offset;
        std::cout << "  mov %eax, " << memberoffset <<"(%edx)" << std::endl;
        

    }
  // WRITEME: Replace with code if necessary
}

void CodeGenerator::visitCallNode(CallNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
}

void CodeGenerator::visitIfElseNode(IfElseNode* node) {
  // WRITEME: Replace with code if necessary
  int labelF = nextLabel();
  int labelE = nextLabel();
  node->expression->accept(this);
  std::cout << " pop %edx" << std::endl;
  std::cout << " cmp $1, %edx" << std::endl;
  std::cout << " jne " << labelF << std::endl;
  if(node->statement_list_1 != NULL) {
    for(std::list<StatementNode*>::iterator i = node->statement_list_1->begin(); i != node->statement_list_1->end(); i++)
      (*i)->accept(this);
  }
  std::cout << " jmp " << labelE << std::endl;
  std::cout << " " << labelF << ":" << std::endl;
  if(node->statement_list_2 != NULL) {
    for(std::list<StatementNode*>::iterator i = node->statement_list_2->begin(); i != node->statement_list_2->end(); i++)
      (*i)->accept(this);
  }
  std::cout << " " << labelE << ":" << std::endl;
  
}

void CodeGenerator::visitWhileNode(WhileNode* node) {
  // WRITEME: Replace with code if necessary
  int labelCondition = nextLabel();
  int labelE = nextLabel(); 
  std::cout << " " << labelCondition << ":" << std::endl;
  node->expression->accept(this);
  std::cout << " pop %edx" << std::endl;
  std::cout << " cmp $1, %edx" << std::endl;
  std::cout << " jne " << labelE << std::endl;
  if(node->statement_list != NULL) {
    for(std::list<StatementNode*>::iterator i = node->statement_list->begin(); i != node->statement_list->end(); i++)
      (*i)->accept(this);
  }
  std::cout << " jmp " << labelCondition << std::endl;
  std::cout << " " << labelE << ":" << std::endl;
}

void CodeGenerator::visitRepeatNode(RepeatNode* node) {
  // WRITEME: Replace with code if necessary
  int labelStatement = nextLabel();
  std::cout << " " << labelStatement << ":" << std::endl;
  node->expression->accept(this);
  if(node->statement_list != NULL) {
    for(std::list<StatementNode*>::iterator i = node->statement_list->begin(); i != node->statement_list->end(); i++)
      (*i)->accept(this);
  }
  std::cout << " pop %edx" << std::endl;
  std::cout << " cmp $1, %edx" << std::endl;
  std::cout << " jne " << labelStatement << std::endl;
}

void CodeGenerator::visitPrintNode(PrintNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
  std::cout << " # Print" << std::endl;
  std::cout << " push $printstr" << std::endl;
  std::cout << " call printf" << std::endl;
  std::cout << " add $4, %esp" << std::endl;
}

void CodeGenerator::visitPlusNode(PlusNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
  std::cout << " # Plus" << std::endl;
  std::cout << " pop %edx" << std::endl;
  std::cout << " pop %eax" << std::endl;
  std::cout << " add %edx, %eax" << std::endl;
  std::cout << " push %eax" << std::endl;
}

void CodeGenerator::visitMinusNode(MinusNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
  std::cout << " # Minus" << std::endl;
  std::cout << " pop %edx" << std::endl;
  std::cout << " pop %eax" << std::endl;
  std::cout << " sub %edx, %eax" << std::endl;
  std::cout << " push %eax" << std::endl;
}

void CodeGenerator::visitTimesNode(TimesNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
  std::cout << " # Timess" << std::endl;
  std::cout << " pop %edx" << std::endl;
  std::cout << " pop %eax" << std::endl;
  std::cout << " imul %edx, %eax" << std::endl;
  std::cout << " push %eax" << std::endl;
}

void CodeGenerator::visitDivideNode(DivideNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
  std::cout << " # Divide" << std::endl;
  std::cout << " pop %ebx" << std::endl;
  std::cout << " pop %eax" << std::endl;
  std::cout << " cdq" << std::endl;
  std::cout << " idiv %ebx" << std::endl;
  std::cout << " push %eax" << std::endl;
}

void CodeGenerator::visitLessNode(LessNode* node) {
  // WRITEME: Replace with code if necessary
  int labelT = nextLabel();
  int labelEnd = nextLabel();
  node->visit_children(this);
  std::cout << " # Less" << std::endl;
  std::cout << " pop %edx" << std::endl;
  std::cout << " pop %eax" << std::endl;
  std::cout << " cmp %edx, %eax" << std::endl;
  std::cout << " jl " << labelT << std::endl;
  std::cout << " push $0" << std::endl;
  std::cout << " jmp " << labelEnd << std::endl;
  std::cout << " " << labelT << ":" << std::endl;
  std::cout << " push $1" << std::endl;
  std::cout << " " << labelEnd << ":" << std::endl;
}

void CodeGenerator::visitLessEqualNode(LessEqualNode* node) {
  // WRITEME: Replace with code if necessary
  int labelT = nextLabel();
  int labelEnd = nextLabel();
  node->visit_children(this);
  std::cout << " # Less Equal" << std::endl;
  std::cout << " pop %edx" << std::endl;
  std::cout << " pop %eax" << std::endl;
  std::cout << " cmp %edx, %eax" << std::endl;
  std::cout << " jle " << labelT << std::endl;
  std::cout << " push $0" << std::endl;
  std::cout << " jmp " << labelEnd << std::endl;
  std::cout << " " << labelT << ":" << std::endl;
  std::cout << " push $1" << std::endl;
  std::cout << " " << labelEnd << ":" << std::endl;
}

void CodeGenerator::visitEqualNode(EqualNode* node) {
  // WRITEME: Replace with code if necessary
  int labelT = nextLabel();
  int labelEnd = nextLabel();
  node->visit_children(this);
  std::cout << " # Equal" << std::endl;
  std::cout << " pop %edx" << std::endl;
  std::cout << " pop %eax" << std::endl;
  std::cout << " cmp %edx, %eax" << std::endl;
  std::cout << " je " << labelT << std::endl;
  std::cout << " push $0" << std::endl;
  std::cout << " jmp " << labelEnd << std::endl;
  std::cout << " " << labelT << ":" << std::endl;
  std::cout << " push $1" << std::endl;
  std::cout << " " << labelEnd << ":" << std::endl;
}

void CodeGenerator::visitAndNode(AndNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
  std::cout << " # And" << std::endl;
  std::cout << " pop %edx" << std::endl;
  std::cout << " pop %eax" << std::endl;
  std::cout << " and %edx, %eax" << std::endl;
  std::cout << " push %eax" << std::endl;
}

void CodeGenerator::visitOrNode(OrNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
  std::cout << " # Or" << std::endl;
  std::cout << " pop %edx" << std::endl;
  std::cout << " pop %eax" << std::endl;
  std::cout << " or %edx, %eax" << std::endl;
  std::cout << " push %eax" << std::endl;
}

void CodeGenerator::visitNotNode(NotNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
  std::cout << " # Not" << std::endl;
  std::cout << " pop %eax" << std::endl;
  std::cout << " xor $1, %eax" << std::endl;
  std::cout << " push %eax" << std::endl;
}

void CodeGenerator::visitNegationNode(NegationNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
  std::cout << " # Negation" << std::endl;
  std::cout << " pop %eax" << std::endl;
  std::cout << " neg %eax" << std::endl;
  std::cout << " push %eax" << std::endl;
}

void CodeGenerator::visitMethodCallNode(MethodCallNode* node) {
  // WRITEME: Replace with code if necessary
  // call all arguments in the method call in reverse order
  if(node->expression_list->size() > 0) {
    for(std::list<ExpressionNode*>::reverse_iterator i = node->expression_list->rbegin(); i != node->expression_list->rend(); i++) 
      (*i)->accept(this);
  }
  if(node->identifier_2 == NULL) { // check if there is a super class or not
    std::cout << " push 8(%ebp)" << std::endl;
    if(currentClassInfo.methods->count(node->identifier_1->name) > 0) 
      std::cout << " call " << currentClassName << "_" << node->identifier_1->name << std::endl;
    else {
      std::string superClass = currentClassInfo.superClassName;
      while(classTable->find(superClass)->second.methods->count(node->identifier_1->name) == 0) 
	superClass = classTable->find(superClass)->second.superClassName;
      std::cout << " call " << superClass << "_" << node->identifier_1->name << std::endl;
    }
  }
  else {
    if(currentMethodInfo.variables->count(node->identifier_1->name) > 0) {
      VariableInfo vi = currentMethodInfo.variables->find(node->identifier_1->name)->second;
      std::cout << " push " << vi.offset << "(%ebp)" << std::endl;
      if(classTable->find(vi.type.objectClassName)->second.methods->count(node->identifier_2->name) > 0) 
	std::cout << " call " << vi.type.objectClassName << "_" << node->identifier_2->name << std::endl;
      else {
	std::string superClass = classTable->find(vi.type.objectClassName)->second.superClassName;
	while(classTable->find(superClass)->second.methods->count(node->identifier_2->name) == 0) 
	  superClass = classTable->find(superClass)->second.superClassName;
	std::cout << " call " << superClass << "_" << node->identifier_2->name << std::endl;
      }
    }
    else if(currentClassInfo.members->count(node->identifier_1->name) > 0) {
      VariableInfo vi = currentMethodInfo.variables->find(node->identifier_1->name)->second;
      std::cout << " push " << vi.offset << "(%ebp)" << std::endl;
      if(classTable->find(vi.type.objectClassName)->second.methods->count(node->identifier_2->name) > 0) 
	std::cout << " call " << vi.type.objectClassName << "_" << node->identifier_2->name << std::endl;
      else {
	std::string superClass = classTable->find(vi.type.objectClassName)->second.superClassName;
	while(classTable->find(superClass)->second.methods->count(node->identifier_2->name) == 0) 
	  superClass = classTable->find(superClass)->second.superClassName;
	std::cout << " call " << superClass << "_" << node->identifier_2->name << std::endl;
      }
    }
    else {
      std::string classname = currentMethodInfo.variables->find(node->identifier_1->name)->second.type.objectClassName;
      while(classTable->find(classname)->second.methods->count(node->identifier_2->name) == 0)
	classname = classTable->find(classname)->second.superClassName;
      std::cout << " push " << currentMethodInfo.variables->find(node->identifier_1->name)->second.offset << "(%ebp)" << std::endl;
      std::cout << " call " << classname << "_" << node->identifier_2->name << std::endl;
    }
  }
  std::cout << " add $" << (node->expression_list->size() * 4) +4 << ", %esp" << std::endl;
  std::cout << " push %eax" << std::endl;
}

void CodeGenerator::visitMemberAccessNode(MemberAccessNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
  if(currentMethodInfo.variables->count(node->identifier_1->name) > 0) {
    VariableInfo vi = currentMethodInfo.variables->find(node->identifier_1->name)->second;
    std::cout << " mov " << vi.offset << "(%ebp), %edx" << std::endl;
    std::cout << " push " << classTable->find(vi.type.objectClassName)->second.members->find(node->identifier_2->name)->second.offset << "(%edx)" << std::endl;
  }
  else {
    VariableInfo vi = currentMethodInfo.variables->find(node->identifier_1->name)->second;
    std::cout << " mov 8(%ebp), %edx" << std::endl;
    std::cout << " mov " << vi.offset << "(%edx), %ebx" << std::endl;
    std::cout << " push " << classTable->find(vi.type.objectClassName)->second.members->find(node->identifier_2->name)->second.offset << "(%ebx)" << std::endl;
  }
}

void CodeGenerator::visitVariableNode(VariableNode* node) {
  // WRITEME: Replace with code if necessary
  if(currentMethodInfo.variables->count(node->identifier->name) > 0)
    std::cout << " push " << currentMethodInfo.variables->find(node->identifier->name)->second.offset << "(%ebp)" << std::endl;
  else {
    std::cout << " mov 8(%ebp), %edx" << std::endl;
    std::cout << " push " << currentClassInfo.members->find(node->identifier->name)->second.offset << "(%edx)" << std::endl;
  }
}

void CodeGenerator::visitIntegerLiteralNode(IntegerLiteralNode* node) {
  // WRITEME: Replace with code if necessary
  std::cout << " push $" << node->integer->value << std::endl;
}

void CodeGenerator::visitBooleanLiteralNode(BooleanLiteralNode* node) {
  // WRITEME: Replace with code if necessary
  std::cout << " push $" << node->integer->value << std::endl;
}

void CodeGenerator::visitNewNode(NewNode* node) {
  // WRITEME: Replace with code if necessary
  ClassInfo ci = classTable->find(node->identifier->name)->second;
  std::cout << " push $" << ci.membersSize << std::endl;
  std::cout << " call malloc" << std::endl;
  std::cout << " add $4, %esp" << std::endl;
  std::cout << " push %eax" << std::endl;
  std::cout << " mov %eax, %ecx" << std::endl;
  if(node->expression_list != NULL) {
    for(std::list<ExpressionNode*>::reverse_iterator i = node->expression_list->rbegin(); i != node->expression_list->rend(); i++)
      (*i)->accept(this);
    std::cout << " push %ecx" << std::endl;
    std::cout << " call " << node->identifier->name << "_" << node->identifier->name << std::endl;
    std::cout << " add $" << (4*node->expression_list->size()) + 4 << ", %esp" << std::endl;
  }
  else {
    if(classTable->find(node->identifier->name)->second.methods->count(node->identifier->name) > 0) {
      std::cout << " push %ecx" << std::endl;
      std::cout << " call " << node->identifier->name << "_" << node->identifier->name << std::endl;
      std::cout << " add $4, %esp" << std::endl;
    }
  }
}

void CodeGenerator::visitIntegerTypeNode(IntegerTypeNode* node) {
  // WRITEME: Replace with code if necessary
}

void CodeGenerator::visitBooleanTypeNode(BooleanTypeNode* node) {
  // WRITEME: Replace with code if necessary
}

void CodeGenerator::visitObjectTypeNode(ObjectTypeNode* node) {
  // WRITEME: Replace with code if necessary
}

void CodeGenerator::visitNoneNode(NoneNode* node) {
  // WRITEME: Replace with code if necessary
}

void CodeGenerator::visitIdentifierNode(IdentifierNode* node) {
  // WRITEME: Replace with code if necessary
}

void CodeGenerator::visitIntegerNode(IntegerNode* node) {
  // WRITEME: Replace with code if necessary
}
