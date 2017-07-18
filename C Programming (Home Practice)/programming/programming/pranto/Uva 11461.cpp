#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,i,c,d;

    while(1)
    {
        scanf("%d %d",&a,&b);
        if(a==0&&b==0)break;
        d=0;
        for(i=a;i<=b;i++){
            c=sqrt(i);
            if(c*c==i)
            d++;
        }
        printf("%d\n",d);
    }
}
