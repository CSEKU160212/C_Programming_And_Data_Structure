#include<stdio.h>
#include<math.h>
#include<string.h>


int main()
{
    unsigned int n[1000], sum, j, k, length, s;
    while(gets(n))
    {
         if(n==0)
            break;
            sum=0;
        length=strlen(n);
        for(j=length, k=1; j>=0; j--, k++)
        {
            s=pow(2,k)-1;
            sum=sum+(n[j]*s);
        }
        printf("%d", sum);
    }


}
