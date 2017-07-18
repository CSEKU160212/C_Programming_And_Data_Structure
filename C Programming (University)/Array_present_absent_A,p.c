#include<stdio.h>
#include<stdlib.h>
int main()
{
    char A[20];
    int i;
    for(i=0; i<20; i++){
        printf("%d\n", i+160201);
        A[i]=getche(); //scanf("%c", &A[i])
        printf("\n");
    }
    for(i=0; i<20; i++){
        if(A[i]=='A' || A[i]=='a')
        printf("%d\n", i+160201);}

    return 0;


}
