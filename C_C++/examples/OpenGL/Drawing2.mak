#     FILE: Drawing2.mak

# ***********************************************************
# *** A	make file to build the opengl, GLUT files and    ****
# ***********************************************************
Drawing2.exe: Drawing2.o
		gcc -o Drawing2 Drawing2.o libglut32.a -lglu32 -lopengl32
Drawing2.o: Drawing2.c
		gcc -c Drawing2.c

