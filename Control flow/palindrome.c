#include <stdio.h>

int main(){
    int num,num1,cnt = 0;
    printf("Enter number to check if Palindrome : ");
    scanf("%d",&num);
    num1 = num;
    while( num > 0){
        int temp;
        temp = num / 10;
        num = temp;
        cnt++;
    }
    num1 = num;
    char arr[cnt + 1];
    sprintf(arr,"%d",num1);
    int digit1 = arr[1] - '0';
    int digit2 = arr[1] - '0';
    printf("%d %d",digit1,digit2);
    for (int i = 0; i > cnt ; i++){
        for(int j = cnt; j>i;j--){
            int digit1 = arr[i] - '0';
            int digit2 = arr[j] - '0';
            printf("%d %d",digit1,digit2);
        }
        if (arr[i] == arr[cnt - i]){
            printf("%d is Palindrome",num1);
        }
        else{
            printf("%d is Not Palindrome",num1);
        }
    }
}