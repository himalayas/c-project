TMP=tmp
VPATH=main:datasource:3th_commons
test:main.o
	g++ -o test main.o
main.o:main.cpp
	g++ -c main.cpp 
.PHONY:clean
clean:
	-rm -rf $(TMP) dist build *.exe *.o