#include<stdio.h>
int main()
{
    int i,A[5],max;
    for(i=0; i<5; i++){
        scanf("%d", &A[i]);
    }
    max=A[0];
     for(i=0; i<5; i++){
        if(max<A[i])
        max=A[i];
     }
     printf("\n\n%d", max);
     return 0;
}
