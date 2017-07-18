#include<stdio.h>
#include<conio.h>
int main(void)// int and void na likhleo kono problem nai...........
{
    char ch;
    printf("Enter a letter : ");
    scanf("%c", &ch);
    switch(ch)
    {
    case 'A' :
        printf("A is vowel.");
        break;
    case 'E' :
        printf("E is vowel.");
        break;
    case 'I' :
        printf("I is vowel.");
        break;
    case 'O' :
        printf("O is vowel.");
        break;
    case 'U' :
        printf("U is vowel.");
        break;
    case 'a' :
        printf("a is vowel.");
        break;
    case 'e' :
        printf("e is vowel.");
        break;
    case 'i' :
        printf("i is vowel.");
        break;
    case 'o' :
        printf("o is vowel.");
        break;
    case 'u' :
        printf("u is vowel.");
        break;
    default :
        printf("%c is consonant.",ch);
    }
    getch();
}
