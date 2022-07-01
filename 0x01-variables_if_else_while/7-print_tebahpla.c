#include <stdio.h>
/**
*main - Entry point
*Discription: in this program i used simple while loop
*to print from a to z backword usnig only putchar
* Return:0 it will return 0 if the program succesed
*/
int main(void)
{
char c;
c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
