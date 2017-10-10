#ifndef _H_HPP
#define _H_HPP

#define ABOUT "FORTH VM emulator/assembler for POSIX systems"

#include <iostream>
using namespace std;

extern void VM();				// virtual machine (bytecode interpreter)

extern int yylex();				// lexer/parser interface
extern int yylineno;
extern char* yytext;
extern int yyparse();
extern void yyerror(string);
#include "ypp.tab.hpp"

#endif // _H_HPP
