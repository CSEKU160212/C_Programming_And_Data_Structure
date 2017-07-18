#include <stdio.h>
#include <conio.h>
int main()
{
    long int bin_num,bin_tmp,dec_digit,dec_num=0,number_base = 0;
    printf("Enter the binary numb: ");
    scanf("%ld", &bin_num);
    bin_tmp = bin_num;
    while(bin_num)
    {
        dec_digit = bin_num%10;
        dec_num += dec_digit << number_base;
        number_base += 1;
        bin_num /= 10;
    }
    printf("\nDecimal equivalent is %ld", dec_num);
    return 0;
}
