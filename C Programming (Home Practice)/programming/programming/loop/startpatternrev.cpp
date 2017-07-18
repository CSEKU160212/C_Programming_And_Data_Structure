#include <stdio.h>
int main()
{
    int row, c,temp;

    for ( row = 5 ; row >= 1 ; row-- )
    {
        for ( c = 1 ; c < temp ; c++ )
        {
            printf(" ");
        }

        for ( c = 1 ; c <= 2*row - 1 ; c++ )
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

