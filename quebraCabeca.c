#include <stdio.h>

int main(void)
{
    int letters[128];
    int i;
    for (i = 0; i < 128; i++)
    {
        letters[i] = 0;
    }
    char string[100001];
    scanf("%s", string);
    int string_length = strlen(string);
    for (i = 0; i < string_length; i++)
    {
        letters[string[i]++];
    }
    int odd = 0;
    for (i = 0; i < 128; i++)
    {
    }
    return 0;
}