#include<stdio.h>
int main()
{
    int n;
    FILE *fptr;
    fptr = fopen("C: \\program.txt","w");
    if(fptr==NULL)
    {
        printf("error!");
        return 0;
    }
    printf("enter n: ");
    scanf("%d",&n);
    fprintf(fptr,"%d",n);
    fclose(fptr);
    return 0;
}
