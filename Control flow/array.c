#include <stdio.h>

int main()
{
    int cnt;
    //char arr[] = {'a', 'e', 'i', 'o', 'u','A','E','I','O','U'};
    char arr[] = {"aeiouAEIOU"};
    char ch;

    printf("Enter a character to check if it is a Vowel : ");
    scanf("%c", &ch);

    for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++)
    {
        if (ch == arr[j])
        {
            printf("%c is a Vowel", ch);
            break;
        }
        else
        {
            printf("%c is not a Vowel", ch);
            break;
        }
    }
}
