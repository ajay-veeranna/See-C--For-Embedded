// literal vs constant
// linteral is a value such as number, char or string which may be assigned to a constant.
// literal may be used directly as function parameter or as an operand in an expression.
// Literals are hard coded values in the program. They can be represented in different formats. Literals are always represented by their values.
// Whats the difference? : If literals are the value constants are the label that represents lineral

// consants are represented in following format
//In line number 11 constant STRING_LENGTH sets that to the number 11.
//In line number 12 sets the constant first_alphabet equal to the linteral values 'a'
#include <stdio.h>
#define STRING_LENGTH (11)
const char first_albhabet = 'a';
int main()
{
    printf("STRING_LENGTH: %d, first_alphabet = %c",STRING_LENGTH, first_albhabet);
    return 0;
}