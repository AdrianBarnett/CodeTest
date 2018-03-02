/*

build lib

g++ -dynamiclib -o lib2.dylib lib2.cpp

g++ -dynamiclib -o lib2.dylib lib2.cpp

*/

#include "lib2.h"

//#include <stdio.h>
#include <string.h>

void getString2(char *str)
{
    strcpy (str, "best function EVER! X222222");
}