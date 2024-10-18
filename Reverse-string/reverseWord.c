#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len;

    printf("\n Please Enter any String :  ");
    gets(str);

    len = strlen(str);
    printf("\nGiven String in Reverse Order :\n");
    for (i = len - 1; i >= 0; i--)
    {
        if (str[i] == ' ')
        {
            str[i] = '\0';
            printf("%s ", &(str[i]) + 1);
        }
    }
    printf("%s", str);

    return 0;
}