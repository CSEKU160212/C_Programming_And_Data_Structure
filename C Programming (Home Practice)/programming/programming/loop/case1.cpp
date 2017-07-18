#include <stdio.h>
int main()
{
    char suite = 3;
    switch(suite)
    {
  case 1:
    printf("Diamond\n");
    break;
  case 2:
    printf("Spade\n");
  case 3:
    printf("jewer\n");
    break;
  default:
    printf("Heart\n");
    }
    printf("I swera one wears a suite\n");
    return 0;
}
