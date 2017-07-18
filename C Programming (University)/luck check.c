#include<stdio.h>
#include<stdlib.h>
int main()
{
    int roll;
    char ch, lucky_num, given_num;

    L: roll = ((int)rand()%40)+160201;
    printf("\n%d", roll);

    lucky_num=(int)rand()%10;
    printf("\n\nEnter your number:");
    scanf("%d",&given_num);
    if(lucky_num==given_num)
        printf("\nYES!! Matched");
    else
        printf("\nSORRY");
    scanf("%c", &ch);
    if('\n'==ch)
    goto L;




    return 0;
}
