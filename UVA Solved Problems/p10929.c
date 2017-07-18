#include<stdio.h>
#include<string.h>
int main()
{
    char N[1035];
    long long int  l;
    while(gets(N))
    {
    l=atoll(N);
        if(l==0)
            break;
        if((l%11)==0)
            printf("%s is a multiple of 11.\n", N);
        else
            printf("%s is not a multiple of 11.\n", N);

    }
    return 0;
}
