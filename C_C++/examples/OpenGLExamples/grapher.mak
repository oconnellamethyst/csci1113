#     FILE: ./OpenGLExamples/grapher.mak

# ***********************************************************
# *** A	make file to build the opengl, GLUT files and    ****
# ***********************************************************
Grapher.exe: Grapher.o
		gcc -L..\OpenGL\lib -o Grapher Grapher.o -lfreeglut -lglu32 -lopengl32
Grapher.o: Grapher.c
		gcc -c -I..\OpenGL\include Grapher.c

