#cc = mips64el-linux-g++
cc = g++
SRC = $(shell find ./ -name "*.cpp")
OBJ = $(SRC:%.cpp = %.o)

ini_test:$(OBJ)
	$(cc)  -o ini_test $(OBJ)

%.o: %.cpp %.h
	$(cc) -c %.cpp
	
.PHONY:clean
clean:
	rm -rf $(obj) ini_test
