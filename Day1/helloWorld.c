//Asks for your name greats with your name
#include <stdio.h>
#define NAME_LENGTH (10)
int main(void){
    char name[NAME_LENGTH];
    printf("May I know your Name:");
    scanf("%s", &name);
    printf("Hello %s !!\r\n", name);
    return 0;
}