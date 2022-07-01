#include <stdio.h>
#include <unistd.h>
/**
*main - Entry point
*Discription: in this program i used for loop with ASCII table
* to print the number and text with put char function
* Return:0 it will return 0 if the program succesed
*/
int main(void)
{
	int i;

	for (i = '0'; i <= '9' ; i++)
	{
		putchar(i);

		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
