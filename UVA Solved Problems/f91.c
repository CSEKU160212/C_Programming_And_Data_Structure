#include<stdio.h>

int f91(int N)
{
    if(N<=100)
    {
        int x=f91(N+11);
        return f91(x);
    }
    else if(N>=101)
    return N-10;

}

int main()
{
    int N;
    while(scanf("%d", &N)==1)
    {
        if(N==0)
            break;
        else

        {
            printf("f91(%d) = %d\n", N, f91(N));
        }
    }
    return 0;
}
