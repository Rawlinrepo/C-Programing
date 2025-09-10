#include <stdio.h>

void prime_range(int num1, int num2){
    int cnt;
    for(int i=num1;i<=num2;i++){
        cnt=0;
        for(int j=num1;j<=num1;j++){
            if(j % 2 == 0){
                cnt++;
            }
        }
        if(cnt <= 1){
        printf("%d\n",i);
        }
    }
}

int main()
{
    int num1, num2;
    printf("Enter First and Second number leaving space : ");
    scanf("%d%d", &num1, &num2);
    prime_range(num1, num2);
}