#include<stdio.h>
int main()
{
    int a,b,i,temp;
    scanf("%d %d",&a,&b);
    if(a==0||b==0)
    {
        printf("Undefinde");
    }
    else
    {
        if(a<b)
        {
            temp = b;
            b = a;
            a = temp;
        }
        for(i=a;;i+=a)
        {
            if(i%b==0)
                break;
        }
        printf("%d",i);
    }
}
