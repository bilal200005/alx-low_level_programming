#include <stdio.h>
/**
*main - Entry point
*Discription: this will pass the letter q and e
*i used if else statement to pass e and q
*Return:0 it will return 0 if the program is correct
*/
int main(void)
{
char c = 'a';
while (c <= 'z')
{
if (c != 'q' && c != 'e')
{
putchar(c);
}
c++;
}
putchar('\n');
return (0);
}
