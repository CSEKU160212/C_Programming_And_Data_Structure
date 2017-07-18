#include<stdio.h>
#include<conio.h>
int main()
{
 char ch,r,c;
 int sp;
 printf("Enter character : ");
 scanf("%c",&ch);
 if(ch>='a' && ch<='z')
   ch=ch-32;
 for(r='A'; ch>=r; r++)
 {
   for(sp=ch-r; sp>=1; sp--)
       printf(" ");
   for(c='A'; r>=c; c++)
       printf("%c",c);
   for(c=r-1; c>='A'; c--)
       printf("%c",c);
   printf("\n");
 }
 getch();
 return 0;
}

