#include <stdio.h>
/*
 There are 4 types of literals:
 integers: 0, 0x0DAC, 0b0101, -1023
 characters: 'a','\r', ' ', '!'
 floating point value: 3.1415, 6.67e-11
 string: "Hello\n", "Hi"
 */

int main()
{
    int deci = 0;
    int negetive_value = -1023;
    int hex = 0x0DAC;
    int bin5 = 0b0101;
    char exlamation_mark = '!';
    float pi = 3.1415;
    double G = 6.67e-11;
    char string1[3] = "Hi";
    char string2[] = "Hello\n";
    printf("Decimal value: %d\n", deci);
    printf("Negative value: %d\n", negetive_value);
    printf("Hexadecimal value: %X\n", hex);
    printf("Binary value (bin5): %d\n", bin5);
    printf("Exclamation mark: %c\n", exlamation_mark);
    printf("Pi value: %.4f\n", pi);
    printf("Gravitational constant (G): %.11e\n", G);
    printf("String1: %s\n", string1);
    printf("String2: %s", string2);
    return 0;
}
