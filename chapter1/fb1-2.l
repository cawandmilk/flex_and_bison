/* English -> American */

%%

"colour"	{ printf("color"); }
"flavour"	{ printf("flavor"); }
"clever"	{ printf("smart"); }
"smart"		{ printf("elegant"); }
"conservative"	{ printf("liberal"); }
.		{ printf("%s", yytext); }

%%

main(int argc, char **argv)
{
	yylex();
}
