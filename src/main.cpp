#include <iostream>

#include "antlr4-runtime.h"
//#include "MyLexer.h"
//#include "MyParser.h"
//#include "analysis.h"

// using namespace antlrcpptest;
// using namespace antlr4;

int main(int, const char**) {
  // Ask the user for an input.
  std::string text_input;
  
  //          << std::endl;
  //std::cout << "input = ";
  //std::cin >> text_input;
  //antlr4::ANTLRInputStream input(text_input);

  //// Apply Lexer.
  //MyLexer lexer(&input);
  //antlr4::CommonTokenStream tokens(&lexer);
  //tokens.fill();

  //// Apply Parser.
  //MyParser parser(&tokens);
  //MyParser::ExpressionContext* expression = parser.expression();

  //// Evaluate the result.
  //std::cout << "Result = " << analysis::evaluate(expression) << std::endl;

  //// Print the tree.
  //std::cout << "Tree = " << std::endl;
  //analysis::DisplayTree tree = analysis::display_tree(expression);
  //for (const auto& line : tree.content)
  //  std::cout << line << std::endl;

  return 0;
}
