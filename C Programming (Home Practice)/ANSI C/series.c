 #include<stdio.h>
int main()
{
    int i, N;
    float sum=0;
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        sum=sum+(1/(float)i);
    }
    printf("%f",sum);
    return 0;
}

