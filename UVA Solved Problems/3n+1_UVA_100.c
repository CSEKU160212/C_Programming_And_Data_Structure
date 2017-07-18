#include<stdio.h>
int main()
{
    int i, j, max, min, count, totalCount, k, n;
        while(scanf("%d%d", &i, &j)==2){
            totalCount=0;
            printf("%d %d", i, j);
            max=(i>j)?i:j;
            min=(i<j)?i:j;
            for(k=min; k<=max; k++){
                count=1;

                n=k;
                while(n>1){
                    if(n%2==0)
                        n=n/2;
                    else
                        n=3*n+1;
                    count++;
                }
                if(totalCount<=count){
                    totalCount=count;
                }
            }
            printf(" %d\n", totalCount);
        }

   return 0;
}
