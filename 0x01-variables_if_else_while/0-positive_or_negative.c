#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - it will start running the program
 *Discription: srand and rand functions will generate rundom numbers
 *and it will be assigned to the n variable each time we run the program
 *the the if else statement will start to check the n and
 *then it will print one of the 3 messages
 *Return: 0 finaly it will return zero if the program eun successfully
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive", n);
}
else if (n == 0)
{
printf("%d is zero", n);
}
else
{
printf("%d is negative", n);
}
return (0);
}
