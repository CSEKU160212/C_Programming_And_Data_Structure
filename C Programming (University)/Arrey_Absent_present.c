#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A[20], i;
        for(i=0; i<20; i++)
        {
            printf("%d\n", i+160201);
            scanf("%d", &A[i]);

        }
        for(i=0; i<20; i++){
        if(A[i]==0)
            printf("%d\t", i+160201);
        }
        return 0;
}
