#include<stdio.h>

int main()
{
    char A[100],B[100];
    int i,j,lenA=0,lenB=0;
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
    A[lenA]=' ';
    for(i=lenA+1,j=0;i<=lenA+lenB+1;i++,j++)
    {
        A[i]=B[j];
    }
    printf("%s",A);

    return 0;
}
