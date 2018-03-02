#
# To run type 'make'
#
# gcc -v 
#
# LINKER ERRORS
#
#
main: lib2.cpp main.cpp util.cpp
	gcc -c lib2.cpp
	gcc -dynamiclib -current_version 1.0 lib2.o -o lib2lib.dylib
	gcc -c main.cpp util.cpp
	gcc -v main.o util.o lib2lib.dylib -o demorun

clean:
	rm *.o