#include <stdio.h>

int main(){
    int num,cnt = 0,num1,sum=0;
    
    printf("Enter number : ");
    scanf("%d",&num1);
    num = num1;

    while(num1 > 0 ){
        int temp;
        temp = num1 / 10;
        num1 = temp;
        cnt++;
    }
    char arr[cnt + 1];
    sprintf(arr,"%d",num);

    for(int i = cnt - 1;i >= 0;i--){
        int digit = arr[i] - '0';
        printf("%d",digit);
    }
}
