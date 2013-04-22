TMP=tmp
VPATH=main:datasource:3th_commons
mm:main.o
	g++ -o mm main.o 
main.o:main.cpp MainClass.hpp
	g++ -o main.o main.cpp  
.PHONY:clean
clean:
	-rm -rf dist build *.exe *.o