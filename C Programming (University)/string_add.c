#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, j,m1, m2, len1=0, len2=0, flag;
    char A[100], B[100];
    gets(A);
    gets(B);
    for(i=0; A[i]!='\0'; i++){
        len1++;
    }
    for(i=0; B[i]!='\0'; i++){
        len2 ++;
    }

   A[len1]=' ';
    for(i=len1+1, j=0; i<len1+len2+1; i++, j++){
        A[i]=B[j];

    }
     A[len1+len2+1]='\0';
     printf("%s",A);
     return 0;
}


