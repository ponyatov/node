#include "hpp.hpp"

#define YYERR "\n\n"<<yylineno<<":"<<msg<<"["<<yytext<<"]\n\n"
void yyerror(string msg) { cout<<YYERR; cerr<<YYERR; exit(-1); }

int main(int argc, char *argv[]){
	// print header
	cout << argv[0] << " : " << ABOUT << endl;
	// run compiler
	yyparse();
	// run VM
	VM();
	// all done
	return 0;
}

void VM(){}
