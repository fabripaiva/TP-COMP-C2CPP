all: flex bison gcc

flex:
	flex traductor.l

bison:
	bison -yd traductor.y

gcc:
	cc y.tab.c -ll -o traductor
