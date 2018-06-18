#     FILE: extern3.mak

# ***********************************************************
# *** A	make file to build s set of interdependent files.****
# ***********************************************************
extern3.exe:	extern3.o extern2.o
		gcc -o extern3 extern3.o extern2.o
extern3.o:	extern3.c
		gcc -c extern3.c
extern2.o:	extern2.c
		gcc -c extern2.c

