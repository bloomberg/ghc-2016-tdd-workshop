CC=g++

triangle: triangle.cpp triangle.t.cpp 
	@rm -f triangle && $(CC) -lpthread -I. -I/usr/local/include /Users/user/Downloads/googletest-release-1.7.0/build/libgtest.a triangle.t.cpp triangle.cpp -o triangle && ./triangle

clean: 
	-@rm -f triangle 

