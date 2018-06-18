#     FILE: Shapes5Test.mak

# ***********************************************************
# *** A	make file to build the ShapesTest file and the	****
# *** files it depends on into a "current" executable.	 ****
# ***********************************************************
Shapes5Test.exe: Shapes5Test.o shapes5/point.o shapes5/triangle.o shapes5/circle.o shapes5/shape.o
		g++ -o Shapes5Test Shapes5Test.o shapes5/point.o shapes5/triangle.o shapes5/circle.o shapes5/shape.o
Shapes5Test.o: Shapes5Test.cpp shapes5/shape.h shapes5/point.h shapes5/triangle.h shapes5/circle.h
		g++ -c Shapes5Test.cpp

shapes5/shape.o: shapes5/shape.cpp shapes5/shape.h
		g++ -c shapes5/shape.cpp -o shapes5/shape.o

shapes5/point.o: shapes5/point.cpp shapes5/point.h shapes5/shape.o
		g++ -c shapes5/point.cpp -o shapes5/point.o

shapes5/circle.o: shapes5/circle.cpp shapes5/circle.h shapes5/shape.o shapes5/point.o 
		g++ -c shapes5/circle.cpp -o shapes5/circle.o

shapes5/triangle.o: shapes5/triangle.cpp shapes5/triangle.h shapes5/point.o 
		g++ -c shapes5/triangle.cpp -o shapes5/triangle.o
