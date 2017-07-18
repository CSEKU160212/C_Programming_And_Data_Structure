#include<stdio.h>
int main()
{
    int a, t;
    float m;

    printf("Total class: ");
    scanf("%d", &t);

    printf("Attendence: ");
    scanf("%d", &a);

    m=(a/(float)t*100);

     if(m>=90){
        printf("Mark is: 10");
    }
        else if(m>=85){
            printf("Mark is: 9 ");
    }
        else if(m>=80){
            printf("Mark is: 8");
    }
        else if(m>=75){
            printf("Mark is: 7");
    }
        else if(m>=70){
            printf("Mark is: 6");
    }
        else if(m>=65){
            printf("Mark is: 5");
    }
        else if(m>=60){
            printf("Mark is:4 ");
    }
        else if(m>=0){
            printf("Mark is: 0");
    }
    return 0;

}
