#     FILE: ./OpenGLExamples/hatch.mak

# ***********************************************************
# *** A	make file to build the opengl, GLUT files and    ****
# *** shapes7 files they depend on.                      ****
# ***********************************************************
hatch.exe: hatch.o ../shapes7/point.o ../shapes7/triangle.o ../shapes7/circle.o ../shapes7/shape.o
		g++ -L..\OpenGL\lib -o hatch hatch.o -lfreeglut -lglu32 -lopengl32 ../shapes7/point.o ../shapes7/triangle.o ../shapes7/circle.o ../shapes7/shape.o
hatch.o: hatch.cpp ../shapes7/shape.h ../shapes7/point.h ../shapes7/triangle.h ../shapes7/circle.h
		g++ -c -I..\OpenGL\include hatch.cpp

../shapes7/shape.o: ../shapes7/shape.cpp ../shapes7/shape.h
		g++ -c -I..\OpenGL\include ../shapes7/shape.cpp -o ../shapes7/shape.o

../shapes7/point.o: ../shapes7/point.cpp ../shapes7/point.h ../shapes7/shape.o
		g++ -c -I..\OpenGL\include ../shapes7/point.cpp -o ../shapes7/point.o

../shapes7/circle.o: ../shapes7/circle.cpp ../shapes7/circle.h ../shapes7/shape.o ../shapes7/point.o 
		g++ -c -I..\OpenGL\include ../shapes7/circle.cpp -o ../shapes7/circle.o

../shapes7/triangle.o: ../shapes7/triangle.cpp ../shapes7/triangle.h ../shapes7/point.o 
		g++ -c -I..\OpenGL\include ../shapes7/triangle.cpp -o ../shapes7/triangle.o
