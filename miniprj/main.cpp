/*

g++ HELP

https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html
http://homepages.gac.edu/~mc38/2001J/documentation/g++.html

COMPILE

g++ -c main.cpp util.cpp

g++ -c compile-options file.cc

g++ -arch x86_64 -framework OpenGL -I/usr/local/include -L/usr/local/lib  -o Main main.cpp -lglfw.3.2 -lGLEW.2.0.

g++ -arch x86_64 -framework lib2.dylib -o demo main.cpp util.cpp


LINK

g++ -o demo main.o util.o lib2.dylib

g++ -o prog link-options file1.o file2.o ... other-libraries

COMPILE & LINK
g++ -o prog compile-and-link-options file1.cc file2.cc ... other-libraries

;TO COMPILE THIS:

$ g++ main.cpp util.cpp -o demo

;build and link multi files inc lib 
$ g++ lib2.dylib main.cpp util.cpp -o demo

;build and link multi files
$ g++ main.cpp util.cpp -o demo
$ g++ main.c -o demo

;or use the following syntax ##
make demo

;to run
$ open demo

*/ 

/*
   char src[40];
   char dest[100];
  
   memset(dest, '\0', sizeof(dest));
   strcpy(src, "This is tutorialspoint.com");
   strcpy(dest, src);

   printf("Final copied string : %s\n", dest);
*/

#include "iostream"
#include "util.h"
//#include "lib2.h"

// demo2.C - Sample C++ program 
int main(void) 
{
    char str[256];
    //char str2[256];
    getString(str);
    //getString2(str2);
    std::cout << str;
    std::cout << "\nHello! This is a C++ program 888.\n";
    //printf("\nAGAIN : %s\n", str2);
    return 0;
}