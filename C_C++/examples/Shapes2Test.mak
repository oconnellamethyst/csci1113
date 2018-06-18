#     FILE: Shapes2Test.mak

# ***********************************************************
# *** A	make file to build the ShapesTest file and the	****
# *** files it depends on into a "current" executable.	 ****
# ***********************************************************
Shapes2Test.exe: Shapes2Test.o shapes2/point.o shapes2/triangle.o shapes2/circle.o
		g++ -o Shapes2Test Shapes2Test.o shapes2/point.o shapes2/triangle.o shapes2/circle.o
Shapes2Test.o: Shapes2Test.cpp shapes2/point.h shapes2/triangle.h shapes2/circle.h
		g++ -c Shapes2Test.cpp

point.o: shapes2/point.cpp shapes2/point.h
		g++ -c shapes2/point.cpp

circle.o: shapes2/circle.cpp shapes2/circle.h shapes2/point.o 
		g++ -c shapes2/circle.cpp

triangle.o: shapes2/triangle.cpp shapes2/triangle.h shapes2/point.o 
		g++ -c shapes2/triangle.cpp
