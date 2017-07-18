#include<stdio.h>

int main()
{
    int A[5], i, MAX;
    for(i=0; i<5; i++){
        scanf("%d", &A[i]);
    }
    MAX=A[0];
    for(i=1; i<5; i++){
    if(MAX<A[i]){
    MAX=A[i];
    }
    }
    printf(" MAX is %d", MAX);
return 0;
}
