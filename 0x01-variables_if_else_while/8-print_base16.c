#include <stdio.h>
/**
*main - Entry point
*Discription: in this program i used for loop with ASCII table
* to print the number and text with put char function
* Return:0 it will return 0 if the program succesed
*/
int main(void)
{
int num;
int tex;

for (num = 48; num < 58; num++)
putchar(num);
for (tex = 97; tex < 103; tex++)
putchar(tex);
putchar('\n');
return (0);
}
