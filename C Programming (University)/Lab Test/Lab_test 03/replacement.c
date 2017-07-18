#include<stdio.h>
int main()
{
    int i, len=0;
    char A[100], ch1, ch2;
    gets(A);

   /* scanf("%c", &ch1);
    scanf("%c", &ch2);*/

    scanf("%c %c", &ch1, &ch2);
    for(i=0; A[i]!='\0'; i++){
        len++;
    }
    for(i=0; i<=len; i++){
        if(A[i]==ch1)
            A[i]=ch2;
    }
    A[len]='\0';
    for(i=0; i<=len; i++){
        printf("%c", A[i]);
    }

}
