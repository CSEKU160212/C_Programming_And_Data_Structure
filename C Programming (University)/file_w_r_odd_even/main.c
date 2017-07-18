#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    FILE *fp1, *fp2;
    fp1=fopen("even.txt", "w");
    fp2=fopen("odd.txt", "w");
    for(i=0; i<=1000; i++){
        if(i%2==0)
            fprintf(fp1, "%d\n", i);
        else
            fprintf(fp2, "%d\n", i);
    }
    fclose(fp1);
    fclose(fp2);
}
