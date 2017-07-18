#include<stdio.h>
int main()
{
    int i,A[5],min;
    for(i=0; i<5; i++){
        scanf("%d", &A[i]);
    }
    min=A[0];
     for(i=0; i<5; i++){
        if(min>A[i])
         min=A[i];
     }
     printf("\n\n%d", min);
     return 0;
}
