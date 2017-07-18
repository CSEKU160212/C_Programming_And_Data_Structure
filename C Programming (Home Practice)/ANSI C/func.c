#include<stdio.h>
char fun(char A[30], char ch1)
{
    int i;
    for(i=0; A[i]!='\0'; i++)
    {
        if(A[i]==ch1)
        {
            A[i]=' ' ;
        }
    }
    return A;
}
int main()
{
   char B[30], ch2;
   gets(B);
   scanf("%c", &ch2);
    B[30]=fun(B, ch2);
    printf("%s", B);
}
