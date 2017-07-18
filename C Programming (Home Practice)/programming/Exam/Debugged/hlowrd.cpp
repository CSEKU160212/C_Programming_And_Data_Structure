#include<stdio.h>
int main ()
{
    char string [ ]= "HELLO WORLD";
    int m;
    for (m=0; string [m] !=NULL; m++)
        if ((m%2)!=0 )
            printf ("%c", string [m] );
}
