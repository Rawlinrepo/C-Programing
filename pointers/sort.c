#include <stdio.h>

int main()
{
    int arr[] = {10, 3, 22, 7, 33, 5, 24};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n-1; i++)
        {
            
            if (arr[i] > arr[i + 1])
            
            {
                int temp = *(arr + i);
                *(arr + i) = *(arr + i + 1);
                *(arr + i + 1) = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}