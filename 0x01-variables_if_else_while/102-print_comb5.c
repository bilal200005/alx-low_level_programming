#include <stdio.h>
/**
 * main - Entyr point
 * Description: prints 4 digits combination
 * Return: Always 0 (success)
 */
int main(void)
{
int i, j, k, l;
for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
for (k = '0'; k <= '9'; k++)
{
for (l = '0'; l <= '9'; l++)
{
if ((k + l) > (i + j))
{
putchar(' ');
putchar(i);
putchar(j);
putchar(' ');
putchar(k);
putchar(l);
putchar(',');
}
}
}
}
}
return (0);
}
