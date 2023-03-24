#include <stdio.h>
/**
*main - Entry point 
*Return: always 0 (success)
*/
int main(void)
{
printf("Size of a char: %lu byte(s)\n", sezeof(char));
printf("Size of an int: %lu byte(s)\n", sezeof(int));
printf("Size of a long int: %lu byte(s)\n", sezeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sezeof(long long int));
printf("Size of a float: %lu byte(s)\n", sezeof(float));
return (0);
}
