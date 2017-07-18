#include <bits/stdc++.h>
#include <string>

int main()
{
    char a[100];
    int palLen, mirrorLen, mainLen;
    while(scanf("%s", &a)!=EOF){
        palLen=0;
        mirrorLen=0;
        mainLen=strlen(a);
            for(int j=0; j<mainLen; j++){
                if(a[j]==a[mainLen-j-1]){
                    palLen++;
                }
            }

        for(int i=0; i<mainLen; i++){
            if((a[i]=='A' && a[mainLen-i-1]=='A')||(a[i]=='E' && a[mainLen-i-1]=='3')||(a[i]=='3' && a[mainLen-i-1]=='E')||
               (a[i]=='H' && a[mainLen-i-1]=='H')||(a[i]=='I' && a[mainLen-i-1]=='I')||(a[i]=='J' && a[mainLen-i-1]=='L')||
               (a[i]=='L' && a[mainLen-i-1]=='J')||(a[i]=='M' && a[mainLen-i-1]=='M')||(a[i]=='O' && a[mainLen-i-1]=='O')||
               (a[i]=='2' && a[mainLen-i-1]=='S')||(a[i]=='T' && a[mainLen-i-1]=='T')||(a[i]=='U' && a[mainLen-i-1]=='U')||
               (a[i]=='V' && a[mainLen-i-1]=='V')||(a[i]=='W' && a[mainLen-i-1]=='W')||(a[i]=='X' && a[mainLen-i-1]=='X')||
               (a[i]=='Y' && a[mainLen-i-1]=='Y')||(a[i]=='Z' && a[mainLen-i-1]=='5')||(a[i]=='5' && a[mainLen-i-1]=='Z')||
               (a[i]=='1' && a[mainLen-i-1]=='1')||(a[i]=='S' && a[mainLen-i-1]=='2')||(a[i]=='8' && a[mainLen-i-1]=='8'))
                mirrorLen++;
        }
        if(palLen==mainLen && mainLen==mirrorLen)
            printf("%s -- is a mirrored palindrome.\n\n", a);
        else if(palLen==mainLen && mainLen!=mirrorLen)
            printf("%s -- is a regular palindrome.\n\n", a);
        else if(palLen!=mainLen && mainLen==mirrorLen)
            printf("%s -- is a mirrored string.\n\n", a);
        else if(palLen!=mainLen && mainLen!=mirrorLen)
            printf("%s -- is not a palindrome.\n\n", a);
    }
    return 0;
}
