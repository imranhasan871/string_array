#include <stdio.h>
#include <string.h>

int main()
{

    char name[100], name2[100], name3[100];
    for (int i = 0; i < 100; i++)
    {
        name[i], name2[i], name3[i] = ' ';
    }

    gets(name);
    gets(name2);
    gets(name3);
//Find length form string array
    int array_lenght1 = strlen(name);
    int array_lenght2 = strlen(name2);
    int array_lenght3 = strlen(name3);


    //Find max length from input.

    int m1 = (array_lenght1 > array_lenght2) ? array_lenght1 : array_lenght2;
    int m2 = (m1 > array_lenght3) ? m1 : array_lenght3;

    for (int i = 0; i < m2; i++)
    {

        printf("%c %c %c\n", name[i], name2[i], name3[i]);
    }

    return 0;
}