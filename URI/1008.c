#include<stdio.h>
int main()
{
    int NUMBER, W;
    double SALARY, Amh;

    scanf("%d%d%lf", &NUMBER, &W, &Amh);

    SALARY=W*Amh;

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", NUMBER, SALARY);

    return 0;
}


