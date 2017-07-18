#include<stdio.h>
int LCM(int a,int b)
{
    int i;
    if(a==0 || b==0)
    {
        printf("Undefined\n");
    }
    else
    {
        if(a<b)
        {
            int temp = b;
            b = a;
            a = temp;
        }
        for(i=a; ; i+=a)
        {
            if(i%b==0)
            {
                break;
            }
        }
       // printf("LCM of two numbers : %d",i);
       return i;
    }
   // return i;

}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",LCM(a,b));
}
