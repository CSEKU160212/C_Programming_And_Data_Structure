#include<stdio.h>
int main()
{
    int i, j, k, countH, countL, N, H[51], T;
    while(scanf("%d", &T)==1)
    {
        for(k=1; k<=T; k++)
        {
            scanf("%d", &N);
            for(i=0; i<N; i++)
            {
                scanf("%d", &H[i]);
            }

            if(N==1)
            {
                countH=0;
                countL=0;
            }

            else
            {
                countH=0;
                countL=0;

                for(j=0; j<N-1; j++)
                {
                    if(H[j+1] > H[j])
                        countH++;
                    else if(H[j+1] < H[j])
                        countL++;
                }
            }

            printf("Case %d: %d %d\n", k, countH, countL);

        }

    }
    return 0;
}
