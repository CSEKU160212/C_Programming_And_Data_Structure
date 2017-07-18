#include <stdio.h>
#include <conio.h>
#include<math.h>
int main()
{
    int i,n,flag=0;
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("Not prime");
    getch();
}
