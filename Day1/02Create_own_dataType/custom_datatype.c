#include <stdio.h>
typedef unsigned int myuint16_t;
// x, y are unsigned ints and 16-bits
myuint16_t x,y;
int main(){
    printf("size of x: %d\r\n", sizeof(x));
    printf("size of y: %d\r\n", sizeof(y));
}