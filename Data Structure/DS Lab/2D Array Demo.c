#include<stdio.h>
int main()
{
    printf("Here We Gonna Make Student Assembly Of 5 Row Of 5 Student In Every Row\n");
    printf("In Respect Of Their Height FOR 25 STUDENT::::::\n");
    printf("-------------------------------------------------------------\n");
    int i,j,flag,press,temp,k,f=0;
    int s[5][5]= {{5,4,2,3,1},{6,3,5,2,3},{7,9,5,8,34},{9,1,3,7,4},{6,4,7,3,2}};
                                                            ///Aikhane 5 ROW And 5 Column er Akta Array khola hoise
    float d,a[5]={4.5,4.7,6.1,5.6,4.8};
                    ///aikhane D holo akta variable jate scna kore KHOJAR jnno input nibe
                    ///ar A[5] dara akta 1D array khola hoise jekhane height er input nibe
    for(i=0; i<5; i++)
    {
        printf("\nGive Value Of Height For %d Row(Such as 5.1 Or 4.5)\n",i+1);
        scanf("%f",&a[i]);  ///aikhane height er input nisse
        printf("Enter The Class Roll For ROW %d In Height %.1f:\n",i+1,a[i]);
        for(j=0; j<5; j++)
        {
            scanf("%d",&s[i][j]);   ///aikhane roll gula input nibe
        }
    }
    printf("\nHere Showing The Final Output:::\n");
    for(i=0; i<5; i++)
    {
        printf("%.1f : ",a[i]); ///aikhane height er value output hosse
        for(j=0; j<5; j++)
        {
            printf("%d ",s[i][j]);  ///aikhane roll er output ashce 2D array er theke
        }
        printf("\n");
    }
    while(1)
    {
        printf("\nEnter The Height Value To Load The Roll Number:::\n");
            scanf("%f",&d); ///height value scan korbe user theke
            flag=0;
            for(i=0; i<5; i++)
            {
                if(a[i]==d) ///check kortese j user input height available kina
                {
                    flag=1; ///input mille flag 1 hbe na mille 0 e theke jabe
                    break;  ///input mille break kore loop theke chole jasse
                }
            }
            if(flag==1)
            {
                printf("%.1lf : ",a[i]);    ///jkhn user input height pabe tkhn I(index) er value sekhanei thakbe jkhane
                                                ///mile jawar por break korsilo and oi index er height frst a print korbe
                for(j=0; j<5; j++)
                    printf("%d ",s[i][j]);      ///j index a break hoisilo shei index er roll number print korbe
                printf("\n");
            }
            else
                printf("Not Found\n");  ///jkhn user input milbe na tkhn flag==0 hbe and "Not Found" print korbe
    }
    return 0;
}
