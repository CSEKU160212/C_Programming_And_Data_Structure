#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,n,rtn,i,flag,count=0;

    scanf("%d %d", &a, &b);

if(a>b){
    for(n=b;n<=a;n++)
    {
        rtn=sqrt(n);
        flag=0;

        for(i=2;i<=rtn;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }

        if(flag==0&&n!=1 &&n!=0)
        {
            count++;
        }
    }

    if(count==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES,%d",count);
    }
}

else{
    for(n=a;n<=b;n++)
    {
        rtn=sqrt(n);
        flag=0;

        for(i=2;i<=rtn;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }

        if(flag==0&&n!=1 &&n!=0)
        {
            count++;
        }
    }

    if(count==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES,%d",count);
    }
}

    return 0;
}
