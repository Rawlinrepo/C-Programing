#include <stdio.h>

int main()
{
    char *arr[] = {"noy", "rawlin", "shello", "ashutosh"};

     for (int i = 0; i < 4; i++)
    {
        printf("%s ", arr[i]);
    }
    printf("\n---------\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%c ", arr[i][0]);
    }
}