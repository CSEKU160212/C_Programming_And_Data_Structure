#include <stdio.h>
int main()
{
    int n,reverse = 0,rem,temp;
    printf("Enter a number: \n");
    scanf("%d", &n);
    temp = n;
    while(temp!=0)
    {
        rem = temp%10;
        reverse = reverse*10 + rem;
        temp = temp/10;

    }
    if(reverse==n)
    {
        printf("%d is a palindrome\n", n);
    }
    else
    {
        printf("%d is not a palindrome\n", n);
    }



}
