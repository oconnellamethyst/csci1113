#     FILE: Drawing3.mak

# ***********************************************************
# *** A	make file to build the opengl, GLUT files and    ****
# ***********************************************************
Drawing3.exe: Drawing3.o
		gcc -o Drawing3 Drawing3.o libglut32.a -lglu32 -lopengl32
Drawing3.o: Drawing3.c
		gcc -c Drawing3.c

