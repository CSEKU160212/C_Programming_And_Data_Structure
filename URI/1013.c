#include<stdio.h>
int main()
{
    int a, b, s, m1, MaiorAB;
    scanf("%d%d%d", &a, &b, &s);
    m1=(a>b)?a:b;
    MaiorAB=(m1>s)?m1:s;
    printf("%d eh o maior\n", MaiorAB);
    return 0;
}
