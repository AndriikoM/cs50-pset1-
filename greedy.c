#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
   float x;
   int y;
   do
   {
    printf("O hai! How much change is owed?");
    x = (100*GetFloat());
    y = roundf(x);
   }
   while (x < 0);
   int q = y / 25;
   int d = (y - (25 * q)) / 10;
   int n = (y - ((25 * q) + (10 * d))) / 5;
   int p = (y - ((25 * q) + (10 * d) + (5 * n)));
   int t = q + d + n + p;
   printf("%d\n", t);
   return 0;
}