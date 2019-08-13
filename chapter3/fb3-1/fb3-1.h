/*
 * Declarations for a calculator fb3-1
 */

/* interface to the lexer */
extern int yylineno;	/* from lexor */
void yyerror(char *s, ...);

/* nodes in the abstract syntax tree */
/* it's such like a binary tree? */
struct ast {
	int nodetype;
	struct ast *l;
	struct ast *r;
};

struct numval {
	int nodetype;	/* type K for constant */
	double number;
};

/* build an AST */
struct ast *newast(int nodetype, struct ast *l, struct ast *r);
struct ast *newnum(double d);

/* evaluate an AST */
double eval(struct ast *);

/* delete and free ans AST */
void treefree(struct ast *);

