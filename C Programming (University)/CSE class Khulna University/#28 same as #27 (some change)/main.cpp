#include<stdio.h>

int main()
{
    char A[100],B[100],C[200];
    int i,j,k,lenA=0,lenB=0;
    gets(A);
    gets(B);
    for(j=0;A[j]!='\0';j++)
    {
        lenA+=1;
    }
    for(j=0;B[j]!='\0';j++)
    {
        lenB+=1;
    }
    for(i=0;i<lenA;i++)
    {
        C[i]=A[i];
    }
    C[lenA]=' ';
    for(i=lenA+1,k=0;i<=lenA+lenB+1;i++,k++)
    {
        C[i]=B[k];
    }
    printf("%s",C);

    return 0;
}
