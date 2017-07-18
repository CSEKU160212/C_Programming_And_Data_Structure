#include<stdio.h>
int main()
{
    printf("Here We Gonna Make Student Assembly Of 5 Row Of 5 Student In Every Row\n");
    printf("In Respect Of Their Height FOR 25 STUDENT::::::\n");
    printf("-------------------------------------------------------------\n");
    int i,j,flag,press,temp,k,f=0;
    int s[5][5]= {{5,4,2,3,1},{6,3,5,2,3},{7,9,5,8,34},{9,1,3,7,4},{6,4,7,3,2}};
    float d,temp2,a[5]= {4.6,4.3,5.6,4.7,5.7};
    /*for(i=0; i<5; i++)
    {
        printf("\nGive Value Of Height For %d Row(Such as 5.1 Or 4.5)\n",i+1);
        scanf("%f",&a[i]);
        printf("Enter The Class Roll For ROW %d In Height %.1f:\n",i+1,a[i]);
        for(j=0; j<5; j++)
        {
            scanf("%d",&s[i][j]);
        }
    }*/
    printf("\nHere Showing The Final Output:::\n");
    for(i=0; i<5; i++)
    {
        printf("%.1f : ",a[i]);
        for(j=0; j<5; j++)
        {
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }
    while(1)
    {
        if(f==1)
        {
            printf("\npress 2 for all sorting(height+roll)\notherwise press 3\n");
            scanf("%d",&press);
        }
        else if(f==2)
            press=3;
        else
        {
            printf("\npress 1 for sorting the roll\npress 2 for all sorting(height+roll)\notherwise press 3\n");
            scanf("%d",&press);
        }
        if(press==3)
        {
            printf("\nEnter The Height Value To Load The Roll Number:::\n");
            scanf("%f",&d);
            flag=0;
            for(i=0; i<5; i++)
            {
                if(a[i]==d)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                printf("%.1lf : ",a[i]);
                for(j=0; j<5; j++)
                    printf("%d ",s[i][j]);
                printf("\n");
            }
            else
                printf("Not Found\n");
        }
        else if(press==1)
        {
            for(k=0; k<5; k++)
                for(i=0; i<5; i++)
                    for(j=0; j<4; j++)
                    {
                        if(s[i][j]>s[i][j+1])
                        {
                            temp=s[i][j];
                            s[i][j]=s[i][j+1];
                            s[i][j+1]=temp;
                        }
                    }
            printf("\nHere Showing The Final Output:::\n");
            for(i=0; i<5; i++)
            {
                printf("%.1f : ",a[i]);
                for(j=0; j<5; j++)
                {
                    printf("%d ",s[i][j]);
                }
                printf("\n");
            }
            f=1;
        }
        else if(press==2)
        {
            for(k=0; k<5; k++)
                for(i=0; i<5; i++)
                    for(j=0; j<4; j++)
                    {
                        if(s[i][j]>s[i][j+1])
                        {
                            temp=s[i][j];
                            s[i][j]=s[i][j+1];
                            s[i][j+1]=temp;
                        }
                    }
            for(j=0; j<5; j++)
                for(k=0; k<4; k++)
                {
                    if(a[k]>a[k+1])
                    {
                        temp2=a[k];
                        a[k]=a[k+1];
                        a[k+1]=temp2;
                        for(i=0; i<5; i++)
                        {
                            temp=s[k][i];
                            s[k][i]=s[k+1][i];
                            s[k+1][i]=temp;
                        }
                    }
                }
            printf("\nHere Showing The Final Output:::\n");
            for(i=0; i<5; i++)
            {
                printf("%.1f : ",a[i]);
                for(j=0; j<5; j++)
                {
                    printf("%d ",s[i][j]);
                }
                printf("\n");
            }
            f=2;
        }
    }
    return 0;
}
