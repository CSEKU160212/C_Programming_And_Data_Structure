#include<stdio.h>
#include<math.h>
int main()
{
    double H, M, totalDegree, deg;

    while(scanf("%lf:%lf", &H, &M))
    {
        if(H==0 && M==0)
            break;
        else{
            deg=(H*60)-(M*11);
            totalDegree=fabs(0.5*deg);

            if(totalDegree > 180)
            {
                totalDegree = 360-totalDegree;
            }

            printf("%.3lf\n", totalDegree);
        }
    }
    return 0;
}
