# FILE: inline5.mak
# ***********************************************************
# *** A make file to build the inline5.cpp file and the  ****
# *** files it depends on into a "current" executable.   ****
# ***********************************************************
inline5:	inline5.o inline5_1.o 
		g++ -o inline5 inline5.o inline5_1.o
inline5.o:	inline5.cpp inline5.h
		g++ -c inline5.cpp
inline5_1.o:	inline5_1.cpp inline5.h
		g++ -c inline5_1.cpp
