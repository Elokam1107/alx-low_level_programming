#include <stdio.h>
/**
*main- This is the entry point for the program
*
* Return: 0 if no errors, returns non zero if there are errors
*/
int main(void)
{
printf("Size of a char: %Id byte(s)\n", sizeof(char));
printf("Size of an int: %Id byte(s)\n", sizeof(int));
printf("Size of an long int: %Id byte(s)\n", sizeof(long int));
printf("Size of an long long int: %Id byte(s)\n", sizeof(long long int));
printf("Size of an float: %Id byte(s)\n", sizeof(float));
return (0);
}
