#include <stdio.h>
int main()
{
    int ascii;
    for(ascii=0;ascii<256;ascii++)
    {
        printf("ASCII- %d : %c\n",ascii,ascii);
    }
}
