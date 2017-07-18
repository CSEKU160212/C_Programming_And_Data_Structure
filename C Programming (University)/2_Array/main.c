#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len1=0, len2=0, i, j;
    char A[20], B[20];
    gets(A);
    gets(B);
    for(i=0; A[i]!='\0'; i++)
        len1++;
    for(j=0; B[j]!='\0'; j++)
        len2++;
    if(len1!=len2)
        printf("Strings are not equal");
    else
    {
        int flag=0;
        for(i=0; A[i]!='\0'; i++)
        {
            if(A[i]!=B[i])
            {
                flag=1;
                break;
            }

        }
        if(flag==0)
            printf("Strings are equal");
        else
            printf("Strings are not equal");
}

return 0;
}
