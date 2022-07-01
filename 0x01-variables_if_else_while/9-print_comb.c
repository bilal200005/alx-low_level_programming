#include <stdio.h>
/**
*main - Entry point
*Discription: in this program i used for loop with ASCII table
* to print the number and text with put char function
* Return:0 it will return 0 if the program succesed
*/
int main(void)
{
int snum = 48;
do {
putchar (snum);
putchar (44);
putchar (0);
snum++;
} while (snum <= 57);
return (0);
}
