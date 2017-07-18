#include<stdio.h>
int main()
{
    int n;
    FILE *fptr;
    fptr = fopen("C.\\progrmming.txt","r");
    if(fptr==NULL)
    {
        printf("error");
        exit(1);
    }
    fscanf(fptr,"%d",&n);
    printf("Value is %d",n);
    fclose(fptr);
}
