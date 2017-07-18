#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A[5], m1, m2, m3, m4, i;
    for(i=0; i<5; i++){
        scanf("%d", &A[i]);
    }
    m1=(A[0]>A[1])? A[0]:A[1];
    m2=(m1>A[2])? m1:A[2];
    m3=(m2>A[3])? m2:A[3];
    m4=(m3>A[4])? m3:A[4];
    printf("\n\n%d", m4);
}
