#include <stdio.h>
/**
*main - Entry point
*Discription: I created char variable
*then i assigned small letter a to it
* then i used while loop to to increase and print untill z
* Return:0 it will return 0 if the program is correct
*/
int main(void)
{
char alphabet;
alphabet = 'a';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
