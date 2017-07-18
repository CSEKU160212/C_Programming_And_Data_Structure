#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, a, b, m1, m2, x, y, temp;
    scanf("%d%d", &a, &b);
    m1=(a<b)?a:b;
    m2=(a>b)?a:b;
            while(m2%m1!=0)
            {
               temp=m1;
               m1=(m2%m1);
               m2=temp;
            }
    printf("%d", m1);
    return 0;
}
