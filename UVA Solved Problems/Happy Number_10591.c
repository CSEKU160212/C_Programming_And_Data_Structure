#include<stdio.h>
int main()
{
    int i, N, T, temp, reminder;
    while(scanf("%d", &T)==1)
    {


        for(i=1; i<=T; i++)
        {

            scanf("%d", &N);
            int sum=0;
            int num=N;
            while(N<9 || N>9)
            {
                if(N<=9)
                {
                    sum=N;
                    break;
                }
                while(N!=0)
                {
                    reminder=N%10;
                    sum=sum+(reminder*reminder);
                    N=N/10;
                }
                N=sum;
                sum=0;
                    if(sum==1 || sum==7)
                        break;
                }
                if(sum==1 || sum==7)
                    printf("Case #%d: %d is a Happy number.\n", i, num);
                else
                    printf("Case #%d: %d is an Unhappy number.\n", i, num);
            }
        }
        return 0;
    }
