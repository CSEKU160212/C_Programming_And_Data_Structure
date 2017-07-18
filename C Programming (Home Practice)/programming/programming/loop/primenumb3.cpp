#include <stdio.h>
int main()
{
    int i,j,start,finish,flag=0;
    printf("Enter a number to check prime or not: \n");
    scanf("%d %d", &start,&finish);

    for(i=start+1; i<finish; i++)
    {

        flag=0;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                flag = 1;
                break;

            }


        }
        if(flag==0)
            printf("%d  ",i);



    }
}


