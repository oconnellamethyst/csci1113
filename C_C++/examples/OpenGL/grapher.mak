#     FILE: ./OpenGL/grapher.mak

# ***********************************************************
# *** A	make file to build the opengl, GLUT files and    ****
# ***********************************************************
Grapher.exe: Grapher.o
		gcc -o Grapher Grapher.o libglut32.a -lglu32 -lopengl32
Grapher.o: Grapher.c
		gcc -c Grapher.c

