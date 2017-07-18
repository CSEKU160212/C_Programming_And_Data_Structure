#include<stdio.h>

int main()
{
    char st[100];
    int i,l,vow=0,con=0,sp=0,dg=0,oth=0;
    gets(st);
    for(i=0;; i++)
    {
        if(st[i]=='\0') break;
        if(st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]== 'o' || st[i]=='u')
            vow++;
        else if(st[i]>='a' && st[i]<='z')
            con++;
        else if(st[i]>='0' && st[i]<= '9')
            dg++;
        else if(st[i]==' ')
            sp++;
        else
            oth++;

    }
    printf("\nVowel = %d",vow);
    printf("\ncons  = %d",con);
    printf("\ndigit = %d",dg);
    printf("\nspace = %d",sp);
    printf("\nOther = %d",oth);
}

