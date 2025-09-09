#include <stdio.h>
#include <math.h>

int main()
{
    int num, cnt = 0, num1, sum = 0;

    //printf("Enter number : ");
    //scanf("%d", &num1);

    for (int j = 0; j < 10; j++)
    {
        num = j;
        cnt = 0;
        sum = 0;
        int digit = 0;
        while (j > 0)
        {
            int temp;
            j = j / 10;
            cnt++;
        }
        //printf("%d\n",cnt);
        // char arr[cnt + 1];
        // sprintf(arr, "%d", num);

        // for (int i = 0; i < cnt; i++)
        // {
        //     digit = arr[i] - '0';
        //     sum = sum + pow(digit, cnt);
        // }
        // if (sum == num)
        // {
        //     //printf("%d is and armstrong number\n", num);
        // }
    }
    printf("%d\n",cnt);
}