#include <stdio.h>

int main()
{
    char arr[] = "abcdxcba";
    int cnt = 0, n  = sizeof(arr) / sizeof(arr[0])-1;

    for (int i = 0; i < n; i++)
    {
        //printf("%c ---- %c\n",*(arr + i),*(arr + n-i-1));
        if (*(arr + i) == *(arr + n - i-1))
        {
            cnt++;
        }
    }
    //printf("%d",cnt);
    if (cnt == n )
    {
        printf("String is a Palindrome");
    }
    else
    {
        printf("String is not a Palindrome");
    }
}