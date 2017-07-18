#include<stdio.h>
int main()
{
    int A, B, C, D, X1;
    scanf("%d%d%d%d", &A, &B, &C, &D);
    X1=(B>C && B>D);
   if(X1>A)
    {
        if(((C+D)>(A+B))&& C>0 && D>0 && (A%2)==0)
            printf("Valores aceitos\n");
    }
    else
        printf("Valores nao aceitos\n");
    return 0;
}
