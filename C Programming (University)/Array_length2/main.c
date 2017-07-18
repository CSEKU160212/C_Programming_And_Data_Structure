#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        char B[100], a;
        int i, l=0;
        gets(B);

        scanf("%c", &a);



        for(i=0; B[i]!='\0'; i++)
        {
            if(a==B[i])
                l++;
        }
        printf("%d\n", l);
    }

    return 0;
}
