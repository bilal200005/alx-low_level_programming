#include <stdio.h>
/**
*main - Entry point
*Discription: in this program i used for loop with ASCII table
* to print the number and text with put char function
* Return:0 it will return 0 if the program succesed
*/
int main(void)
{
int snum;
for (snum = 48; snum < 58; snum++){
putchar(snum);
if (snum != 57)
{
putchar (44);
putchar (0);
}
}
return (0);
}
