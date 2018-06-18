#     FILE: Shapes3Test2.mak

# ***********************************************************
# *** A	make file to build the ShapesTest file and the	****
# *** files it depends on into a "current" executable.	 ****
# ***********************************************************
Shapes3Test2.exe: Shapes3Test2.o shapes3/point.o shapes3/triangle.o shapes3/circle.o
		g++ -o Shapes3Test2 Shapes3Test2.o shapes3/point.o shapes3/triangle.o shapes3/circle.o
Shapes3Test2.o: Shapes3Test2.cpp shapes3/point.h shapes3/triangle.h shapes3/circle.h
		g++ -c Shapes3Test2.cpp

shapes3/point.o: shapes3/point.cpp shapes3/point.h
		g++ -c shapes3/point.cpp -o shapes3/point.o

shapes3/circle.o: shapes3/circle.cpp shapes3/circle.h shapes3/point.o 
		g++ -c shapes3/circle.cpp -o shapes3/circle.o

shapes3/triangle.o: shapes3/triangle.cpp shapes3/triangle.h shapes3/point.o 
		g++ -c shapes3/triangle.cpp -o shapes3/triangle.o
