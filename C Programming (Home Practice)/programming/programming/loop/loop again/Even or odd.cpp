#include <stdio.h>
#include <conio.h>
int main()
{
    int counter;
    printf("Even number\n");
    for(counter = 1;counter<=50;counter++)
    {
        if(counter%2)
            continue;
        printf("%d ", counter);
    }
    printf("\n\nOdd number\n");
    counter =0;
    while(counter<50)
    {
        counter++;
        if(!(counter%2))
            continue;
        printf("%d ", counter);
    }
    return 0;
}
