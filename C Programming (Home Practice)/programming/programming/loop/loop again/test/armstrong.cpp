#include <stdio.h>
int main()
{
    int i,n1,n2,num=0,rem,temp;
    printf("Enter intervals:  \n");
    scanf("%d %d", &n1,&n2);
    printf("Armstng number between %d and %d are:  \n",n1,n2);
    for(i=n1+1; i<n2; i++)
    {
        temp = i;
        while(temp!=0)
        {
            rem = temp%10;
            num+=rem*rem*rem;
            temp = temp/10;
        }
        if(i==num)
            printf("%d",i);

    }
}

