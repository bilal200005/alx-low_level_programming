#include "main.h"
/**
 *main - Enter code
 *Discription: i will use putchar function to print
 *_putchar followed by new line
 *Return:0 this program will return zero if successed
 */
int main(void)
{
char c[8] = "_putchar";
int i;
for (i = 0; i < 9; i++)
{
_putchar(c[i]);
}
_putchar('\n');
return (0);
}
