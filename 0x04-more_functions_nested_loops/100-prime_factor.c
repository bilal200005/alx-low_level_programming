#include <stdio.h>
/**
 * main -  calculate largest prime of 612852475143
 *
 * Return: Success Always
 */
int main(void)
{
long num = 612852475143;
int count;
for (count = 2; num > 1; count++)
{
while (num % count == 0)
{
printf("%d", count);
num = num / count;
}
}
printf("\n");
return (0);
}
