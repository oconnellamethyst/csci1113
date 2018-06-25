#     FILE: drawing.mak

# ***********************************************************
# *** A	make file to build the opengl, GLUT files and    ****
# ***********************************************************
Drawing.exe: Drawing.o
		gcc -o Drawing Drawing.o libglut32.a -lglu32 -lopengl32
Drawing.o: Drawing.c
		gcc -c Drawing.c

