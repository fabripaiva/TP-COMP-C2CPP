all: flex bison gcc

flex:
	flex traductor_c2cpp.l

bison:
	bison -yd traductor_c2cpp.y

gcc:
	cc y.tab.c -ll -o traductor
