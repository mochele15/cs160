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
  // WRITEME: Replace with code if necessary
}

void CodeGenerator::visitMethodBodyNode(MethodBodyNode* node) {
  // WRITEME: Replace with code if necessary
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
  // WRITEME: Replace with code if necessary
}

void CodeGenerator::visitCallNode(CallNode* node) {
  // WRITEME: Replace with code if necessary
  node->visit_children(this);
}

void CodeGenerator::visitIfElseNode(IfElseNode* node) {
  // WRITEME: Replace with code if necessary
  int labelT = nextLabel();
  
}

void CodeGenerator::visitWhileNode(WhileNode* node) {
  // WRITEME: Replace with code if necessary
}

void CodeGenerator::visitRepeatNode(RepeatNode* node) {
  // WRITEME: Replace with code if necessary
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
}

void CodeGenerator::visitMemberAccessNode(MemberAccessNode* node) {
  // WRITEME: Replace with code if necessary
}

void CodeGenerator::visitVariableNode(VariableNode* node) {
  // WRITEME: Replace with code if necessary
  
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
