#include <stdio.h>

int pal(int n)
{
    int flag, reverse=0, rem,temp;
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        reverse=reverse*10+rem;
        temp=temp/10;
    }
    if(reverse==n)
        flag = 1;
    else
        flag = 0;

    return flag;
}

int main()
{
    int n,flag;
    while(scanf("%d",&n)==1)
    {
        flag = pal(n);
        if(flag==1)
            printf("palindrome.\n");
        else
            printf("Not palindrome.\n");

    }

}
