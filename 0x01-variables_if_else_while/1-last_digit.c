#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* Description: checking the last digit of a string
* Return : 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int m = n%10;
if (m > 5)
{
printf("Last digit of %d is %d and is greater than 5", n ,m);
}
else if (m == 0)
{
printf("Last digit of %d is %d and is 0", n ,m);
}
else
{
printf("Last digit of %d is %d and is less than 6", n ,m);
}
return (0);
}
