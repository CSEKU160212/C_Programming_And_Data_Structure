#include<stdio.h>
int main()
{
    char ch;
    // printf("Enter the letter you wanna check: \n");
        scanf("%c", &ch);

        switch(ch)
        {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            printf("The Letter You Entered is Vowel\n");
            break;
        default:
            printf("The Letter You Entered is Consonant\n");

        }
    return 0;
}
