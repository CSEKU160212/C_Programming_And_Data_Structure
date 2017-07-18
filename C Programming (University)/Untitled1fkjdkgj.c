#include<stdio.h>

int main()
{
    int i, j, len=0;
    char A[100], ch1, ch2;
    gets(A);
    scanf("%c", &ch1);
    scanf("%c", &ch2);
    for(i=0; A[i]!='\0'; i++)
    {

        len++;


        for(j=0; j<=len ; j++)
        {
            if(A[j]==ch1)
                A[j]=ch2;

        }
        for(i=0; j<=len; j++)
        {
            printf("%c", A[j]);

        }

    }
}
