#include <stdio.h>
#include <string.h>

int main()
{
    char *arr[] = {"noy", "rawlin leitao", "shello", "ram", "ashutosh", "boy"};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (strcmp(arr[i], arr[i + 1]) > 0)  
            {
                char* temp = *(arr+i);
                *(arr+i) = *(arr+i + 1);
                *(arr+i + 1) = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s ", arr[i]);
    }
    

}
