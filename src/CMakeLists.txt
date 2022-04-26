
# Include source files and the generated files
include_directories(${CMAKE_CURRENT_BINARY_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
 

ANTLR(INPUT PhpLexer.g4)
ANTLR(INPUT PhpParser.g4 DEPENDENCIES PhpLexer.cpp)

add_executable(main
  main.cpp
  PhpLexer.cpp
  PhpParser.cpp
  PhpLexerBase.cpp
)
target_link_libraries(main PRIVATE antlr4_static)
set_property(TARGET main PROPERTY CXX_STANDARD 11)
