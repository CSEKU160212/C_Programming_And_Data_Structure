#include <stdio.h>

int main() {

    int pr_code1,pr_code2;
    float num_product1,num_product2,product_price1,product_price2,total;

    scanf("%d %f %f",&pr_code1,&num_product1,&product_price1);
    scanf("%d %f %f",&pr_code2,&num_product2,&product_price2);

    total = num_product1*product_price1 + num_product2*product_price2;

    printf("VALOR A PAGAR: R$ %.2f\n",total);

    return 0;
}
