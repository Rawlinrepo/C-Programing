#include <stdio.h>

int main()
{
    char str[] = {"abcdefghiabcde"};
    for (int i = 0; i < (sizeof(str) / sizeof(str[0])) - 1; i++)
    {
        int cnt = 0;
        for (int j = 0; j < (sizeof(str) / sizeof(str[0])) - 1; j++)
        {
            if (str[i] == str[j])
            {
                cnt++;
            }
        }
        if(cnt <2){
                printf("%c ",str[i]);
            }
    }
}