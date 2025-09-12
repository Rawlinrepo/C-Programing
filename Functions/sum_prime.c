#include <stdio.h>

void sum_prime(int num2)
{
    int cnt, arr[15] = {0};
    for (int i = 1, cnt2 = 0; i <= num2; i++)
    {
        cnt = 0;
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                cnt++;
            }
        }
        if (cnt < 2)
        {
            arr[cnt2] = i;
            cnt2++;
        }
    }
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (num2 == (arr[i] + arr[j + 1]) && arr[i] != arr[j + 1] && arr[i] != 0 && arr[j + 1] != 0)
            {
                printf("Sum of prime numbers %d and %d is : %d\n", arr[i], arr[j + 1], arr[i] + arr[j + 1]);
            }
        }
    }
    printf("No prime numbers 2 prime numbers sum up to %d",num2);   

}

int main()
{
    int num2 = 97;
    sum_prime(num2);
}
