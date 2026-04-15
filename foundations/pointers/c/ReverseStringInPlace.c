// Given a null-terminated string, reverse it in place using only pointer manipulation.

#include <stdio.h>
#include <stdlib.h>

void reverse(char *string)
{
    char *start = string;
    char *end = NULL;

    while (*start != '\0')
    {
        end = start;

        start++;
    }

    start = string;
    char tmp;

    while (start < end)
    {
        tmp = *start;
        *start = *end;
        *end = tmp;

        start++;
        end--;
    }
}

int main()
{
    char *string = malloc(sizeof(char) * 100);
    scanf("%99s", string);

    reverse(string);

    printf("%s\n", string);

    free(string);

    return 0;
}
