
all: diamond test_diamond

diamond: diamond.cpp main.cpp

test_diamond: test_diamond.cpp diamond.cpp

clean:
	rm -f test_diamond diamond
