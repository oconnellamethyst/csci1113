#     FILE: ShapesTest2.mak

# ***********************************************************
# *** A	make file to build the ShapesTest file and the	****
# *** files it depends on into a "current" executable.	 ****
# ***********************************************************
ShapesTest2.exe: ShapesTest2.o point.o triangle.o circle.o
		g++ -o ShapesTest2 ShapesTest2.o point.o triangle.o circle.o
ShapesTest2.o: ShapesTest2.cpp point.o triangle.o circle.o
		g++ -c ShapesTest2.cpp

point.o: point.cpp point.h
		g++ -c point.cpp

circle.o: circle.cpp circle.h point.o 
		g++ -c circle.cpp

triangle.o: triangle.cpp triangle.h point.o 
		g++ -c triangle.cpp
