#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A[100],B[10];
    int i,j,k,l,lA=0,lB=0,flag=0;
    printf("Enter string :\n");
    gets(A);
    printf("Enter substring :\n");
    gets(B);
    for(i=0;A[i]!='\0';i++)
    {
        lA++;
    }
    printf("lA %d\n",lA);
    for(j=0;B[j]!='\0';j++)
    {
        lB++;
    }
    printf("lB %d\n",lB);
    l=0;
    for(k=0;k<lA;k++)
    {
        for(;l<lB;)
        {
            if(A[k]==B[l])
            {
                flag++;
                l++;
                break;
            }
            else
            {
                flag=0;
                l=0;
                break;
            }
        }
        if(flag==lB)
        break;
    }
    if(flag==lB)
    {
        printf("YES SUBSTRING FOUND,position: %d to %d",k-lB+2,k+1);
    }
    return 0;
}


