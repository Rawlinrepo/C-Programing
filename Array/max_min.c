#include <stdio.h>

int main()
{
    int arr[] = {4, 2, 32, 41, 99,382,121,2332,54, 3, 70};
    int min=arr[0],max = arr[0];

    for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        else if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("The Max : %d\nThe Min : %d",max,min);
}