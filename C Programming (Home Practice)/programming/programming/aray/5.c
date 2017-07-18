#include <stdio.h>
int main()
{
    int marks,i,count;
    int total_marks[]= {80,81,82,83,84,85,84,83,82,82};
    for(marks=80; marks<=85; marks++)
    {
        count=0;
        for(i=0; i<10; i++)
        {
            if(total_marks[i]==marks)
            {
                count++;
            }
        }
        printf("Marks : %d Count : %d\n",marks,count);
    }
    return 0;
}
