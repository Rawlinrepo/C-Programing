#include <stdio.h>

void prime(int num)
{
    int cnt = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cnt++;
        }
    }
    if (cnt <3)
    {
        printf("%d is prime", num);
    }
    else
    {
        printf("%d is not prime", num);
    }
}

int main()
{
    int num;
    printf("Enter a number to check if prime : ");
    scanf("%d", &num);
    prime(num);
}