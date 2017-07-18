#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp1, *fp2, *fp3, *fp4;
    int i, l1, l2, n;
    fp1=fopen("Even.txt", "w");
    fp2=fopen("Odd.txt", "w");
    for(i=0; i<=1000; i++)
    {
     if(i%2==0)
     fprintf(fp1, "%d\n", i);
    else
        fprintf(fp2, "%d\n", i);

    }

    /*fp3=fopen("Even.txt", "r");
    fp4=fopen("Odd.txt", "r");
    l1=(1000-0)/2;
    l2=(1000-0)/2;

    for(i=0; i<=l1; i++){
        fscanf(fp3, "%d", &i);
        fprintf(fp3, "%d\n",i);
    }
    */
    fclose(fp1);
    fclose(fp2);
    //fclose(fp3);
    //fclose(fp4);
}
