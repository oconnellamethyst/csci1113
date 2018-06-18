#     FILE: functmp3.mak

# ***********************************************************
# *** A make file to build the functmp3.cpp file and the ****
# *** files it depends on into a "current" executable.   ****
# ***********************************************************
inline5:	functmp3.o inline5_1.o 
		g++ -o functmp3 functmp3.o inline5_1.o
inline5.o:	functmp3.cpp inline5.h
		g++ -c functmp3.cpp
inline5_1.o:	inline5_1.cpp inline5.h
		g++ -c inline5_1.cpp
