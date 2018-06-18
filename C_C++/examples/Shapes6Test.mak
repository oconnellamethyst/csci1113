#     FILE: Shapes6Test.mak

# ***********************************************************
# *** A	make file to build the ShapesTest file and the	****
# *** files it depends on into a "current" executable.	 ****
# ***********************************************************
Shapes6Test.exe: Shapes6Test.o shapes6/point.o shapes6/triangle.o shapes6/circle.o shapes6/shape.o
		g++ -o Shapes6Test Shapes6Test.o shapes6/point.o shapes6/triangle.o shapes6/circle.o shapes6/shape.o
Shapes6Test.o: Shapes6Test.cpp shapes6/shape.h shapes6/point.h shapes6/triangle.h shapes6/circle.h
		g++ -c Shapes6Test.cpp

shapes6/shape.o: shapes6/shape.cpp shapes6/shape.h
		g++ -c shapes6/shape.cpp -o shapes6/shape.o

shapes6/point.o: shapes6/point.cpp shapes6/point.h shapes6/shape.o
		g++ -c shapes6/point.cpp -o shapes6/point.o

shapes6/circle.o: shapes6/circle.cpp shapes6/circle.h shapes6/shape.o shapes6/point.o 
		g++ -c shapes6/circle.cpp -o shapes6/circle.o

shapes6/triangle.o: shapes6/triangle.cpp shapes6/triangle.h shapes6/point.o 
		g++ -c shapes6/triangle.cpp -o shapes6/triangle.o
