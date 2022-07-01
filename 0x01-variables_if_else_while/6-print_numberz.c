#include <stdio.h>
/**
*main - Entry point
*Discription: in this program i used simple while loop
* to print all the base 10 numbers but i am not allowed
* to use char variable so instead i added 48 which is
* zero in the ASCII Table so it will print the exact
* number i am looking
* Return:0 it will return 0 if the program succesed
*/
int main(void)
{
int base;
base = 0;
while (base < 10)
{
putchar(48 + base);
base++;
}
putchar('\n');
return (0);
}
