#include <stdio.h>

int main()
{
    int N, C, G[1001], i, j, count;
    double sum, avg, lastAvg;

    while(scanf("%d", &C)==1)
    {

        for(j=1; j<=C; j++)
        {
            scanf("%d", &N);
            sum=0;
            for(i=0; i<N; i++)
            {
                scanf("%d", &G[i]);
                sum=sum+G[i];
            }

            avg= sum/N;
            count=0;

            for(i=0; i<N; i++)
            {
                if(G[i]>avg)
                {
                    count++;
                }
            }

            lastAvg=(count/(double)N)*100;

            printf("%.3lf%\n", lastAvg);

        }
    }
    return 0;
}
