#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, i;
    while(scanf("%d%d", &a, &b)==2){
    int count = 0;
    if(a!=0 && b!=0){
    for(i=a; i<=b; i++)
        {
            int rt, S;
            rt=sqrt(i);
            S=rt*rt;
            if(S==i)
            {
                count+=1;
            }
        }
        printf("%d\n", count);
    }
    }
return 0;
}
