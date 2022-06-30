#include <stdio.h>
/**
 *main - will print the sizes of datatypes
 *Description : this program will print all the data types byte using sizeod
 *Return: 0 it will return 0 if the program successed
 */
int main(void)
{
int a;
char b;
float c;
long int d;
long long int e;

printf("Size of a char: %zu byte(s)\n", sizeof(b));
printf("size of an int: %zu byte(s)\n", sizeof(a));
printf("size of a long int: %zu byte(s)\n", sizeof(d));
printf("size of a long long int: %zu byte(s)\n", sizeof(e));
printf("size of a float: %zu byte(s)\n", sizeof(c));
return (0);
}
