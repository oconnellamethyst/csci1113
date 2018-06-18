#     FILE: Shapes4Test4.mak

# ***********************************************************
# *** A	make file to build the ShapesTest file and the	****
# *** files it depends on into a "current" executable.	 ****
# ***********************************************************
Shapes4Test4.exe: Shapes4Test4.o shapes4/point.o shapes4/triangle.o shapes4/circle.o
		g++ -o Shapes4Test4 Shapes4Test4.o shapes4/point.o shapes4/triangle.o shapes4/circle.o
Shapes4Test4.o: Shapes4Test4.cpp shapes4/point.h shapes4/triangle.h shapes4/circle.h
		g++ -c Shapes4Test4.cpp

shapes4/point.o: shapes4/point.cpp shapes4/point.h
		g++ -c shapes4/point.cpp -o shapes4/point.o

shapes4/circle.o: shapes4/circle.cpp shapes4/circle.h shapes4/point.o 
		g++ -c shapes4/circle.cpp -o shapes4/circle.o

shapes4/triangle.o: shapes4/triangle.cpp shapes4/triangle.h shapes4/point.o 
		g++ -c shapes4/triangle.cpp -o shapes4/triangle.o
