#include<stdio.h>
using namespace std;
int main()
{
    int a[3][3][3],num=1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                a[i][j][k] = num;
                num++;
            }
        }
    }
    for(int i=0,num=1;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++,num++)
            {
                printf("%3d",a[i][j][k]);
            }
            printf("\n");
        }
    }
}
