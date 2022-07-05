#include "main.h"
/**
 *print_alphabet_x10 - prints all alphabet 10 times
 */

void print_alphabet_x10(void)
{
char alp;
int count = 0;
while (count <= 10)
{
alp = 'a';
while (alp <= 'z')
{
_putchar(alp);
alp++;
}
count++;
_putchar('\n');
}
}
