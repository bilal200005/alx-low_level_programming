#include <stdio.h>
/**
*main - Entry point
*Discription: I created char variable
*then i assigned small letter and capital 'a' 'A'
* then i used two while loop to to increase and print untill z
* Return:0 it will return 0 if the program is correct
*/
int main(void)
{
char sa = 'a';
char ca = 'A';
while (sa <= 'z')
{
putchar(sa);
sa++;
}
while (ca <= 'Z')
{
putchar(ca);
ca++;
}
putchar('\n');
return (0);
}
