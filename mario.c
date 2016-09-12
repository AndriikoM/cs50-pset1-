#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int Height;
    do
    {
        printf("Height:");
        Height = GetInt();
    }
    while(Height<0 || Height>23);
    for (int i=1; i<=Height; i++)
    {
        for (int j=Height-i; j>0; j--)
        {
        printf(" ");
        }
        for (int n=0; n<=i; n++)
        {
            printf("#");
        }
    printf("\n");
    }
    return 0;
}