#include <stdio.h>

int main()
{
    int arr[4][4] = {42, 7, 93, 18, 65, 21, 54, 89, 36, 12, 77, 5, 90, 33, 48, 26};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (arr[i][k] > arr[i][k + 1])
                {
                    int temp = arr[i][k];
                    arr[i][k] = arr[i][k + 1];
                    arr[i][k + 1] = temp;
                }
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}