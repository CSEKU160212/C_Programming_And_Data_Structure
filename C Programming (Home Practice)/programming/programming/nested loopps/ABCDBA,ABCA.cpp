#include<stdio.h>
#include<conio.h>
int main()
{
  int sp;
  char ch,r,c;
  printf("Enter pyramid character : ");
  scanf("%c",&ch);
  if(ch>='a' && ch<='z')
    ch=ch-32;
  for(r='A'; r<=ch; r++)
  {
     for(sp=r; sp>'A'; sp--)
       printf(" ");
     for(c=r; c<=ch; c++)
       printf("%c",c);
     for(c=ch-1; r<=c; c--)
       printf("%c",c);
     printf("\n");
  }
  return 0;
}
