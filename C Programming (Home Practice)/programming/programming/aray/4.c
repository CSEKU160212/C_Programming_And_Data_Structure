#include<stdio.h>
int main()
{
    int ft_marks[4]= {89,85,78,81},
                     st_marks[4]= {82,80,86,79},
                                  final_marks[4]= {84,81,83,82};
    int i;
    double total_marks[4];
    for(i=0; i<4; i++)
    {
        total_marks[i]=ft_marks[i]/4.0+st_marks[i]/4.0+final_marks[i]/2.0;
    }
    for(i=1; i<=4; i++)
    {
        printf("ROLL NO: %d\tTotal_marks : %0.0lf\n",i,total_marks[i-1]);
    }
    return 0;
}
