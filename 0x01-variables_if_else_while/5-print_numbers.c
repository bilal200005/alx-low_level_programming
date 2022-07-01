#include <stdio.h>
/**
*main - Entry point
*Discription: in this program i used simple while loop
* to print all the base 10 numbers
* Return:0 it will return 0 if the program succesed
*/
int main(void)
{
int base;
base = 0;
while (base < 10)
{
printf("%d", base);
base++;
}
printf("\n");
return (0);
}
