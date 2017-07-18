#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,rev=0,temp;
    while(scanf("%d",&n)!=EOF)
    {
        temp=n;
        while(temp!=0)
        {
            rev=rev*10;
            rev=rev+temp%10;
            temp=temp/10;
        }
        if(n==rev)
            printf("Palindrome\n");
        else
            printf("Not palindrome\n");
    }
    return 0;
}
