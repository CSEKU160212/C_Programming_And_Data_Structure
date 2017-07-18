#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char str[1000], replacecby[100], tobereplaced[100], newstr[1000];
    gets(str);
    gets(tobereplaced);
    gets(replacecby);

    int a, b, i, j;
    int lenstr, lentobereplaced, lenreplacedby;
    for(lenstr = 0; str[lenstr] != 0; lenstr++);
    for(lentobereplaced = 0; tobereplaced[lentobereplaced] != 0; lentobereplaced++);
    for(lenreplacedby = 0; replacecby[lenreplacedby] != 0; lenreplacedby++);

    bool match = false;

    for(i = 0; i<lenstr; i++)
    {
        if(str[i] == tobereplaced[0])
        {
            match = true;
            for(j = 1; j<lentobereplaced; j++)
            {
                if(str[i+j] != tobereplaced[j]){
                    match = false;
                    break;
                }
            }
        }
        if(match) break;
    }
    a = i, b = i+lentobereplaced;

    for(i = 0; i!=a; i++) newstr[i] = str[i];
    for(i = 0; i<lenreplacedby; i++) newstr[i+a] = replacecby[i];
    for(i = a + lenreplacedby, j = b; j<=lenstr; i++, j++) newstr[i] = str[j];
    puts(newstr);
}
