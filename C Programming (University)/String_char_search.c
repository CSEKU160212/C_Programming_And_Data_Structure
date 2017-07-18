#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, count=0;;
    char A[100], ch1;
    gets(A);
    scanf("%c", &ch1);
    for(i=0; A[i]!='\0'; i++)
    {
        if (A[i]==ch1)
            count++;
    }
    printf("%d", count);
    return 0;
}
