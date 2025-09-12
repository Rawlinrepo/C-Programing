#include <stdio.h>

int main()
{
    char str[] = {"abcdcba"};
    // printf("%c\n",str[(sizeof(str) / sizeof(str[0]))- 2]);
    int cnt = 0;
    for (int j = 0; j < (sizeof(str) / sizeof(str[0])) - 2; j++)
    {
        if (str[j] == str[(sizeof(str) / sizeof(str[0])) - j - 2])
        {
            cnt++;
        }
    }
    
    if (cnt == str[(sizeof(str) / sizeof(str[0]))])
    {
        printf("%s\nString is a palindropme", str);
    }
    else
    {
        printf("%s\nString is not a palindropme", str);
    }
}
