#include <stdio.h>
/**
*main- This is the entry point for the program
*
* Return: 0 if no errors, returns non zero if there are errors
*/
int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of an long int: %zu byte(s)\n", sizeof(long intType));
printf("Size of an long long int: %zu byte(s)\n", sizeof(long long intType));
printf("Size of an float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
