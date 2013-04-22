TMP=tmp
VPATH=main:datasource:3th_commons
test:main.o
    g++ -o $(TMP)/test main.cpp main/*
	
.PHONY:clean
clean:
    -rm -rf $(TMP)/*.o dist build *.exe *.o