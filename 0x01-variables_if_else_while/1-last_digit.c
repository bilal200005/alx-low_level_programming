#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*Discription: I assigned 2 variables to store data
*I used time function to generate random number and devide it
*then i used % to get the last number of it
*finally i used if statement
* Return:0 it will return 0 if the program is correct
*/
int main(void)
{
int n;
int last;
srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (last > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, last);
}
else if (last == 0)
{
printf("Last digit of %i is %i and is 0\n", n, last);
}
else if (last < 6)
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);
}
return (0);
}
