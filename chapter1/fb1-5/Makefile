
fb1-5: fb1-5.l fb1-5.y
	flex fb1-5.l
	bison -d fb1-5.y
	cc -o fb1-5 fb1-5.tab.c lex.yy.c -lfl

clean:
	rm -rf fb1-5 fb1-5.tab.c fb1-5.tab.h lex.yy.c

