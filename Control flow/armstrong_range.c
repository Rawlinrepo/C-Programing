#include <stdio.h>
#include <math.h>

int main(){
    int num1 = 400,num2 =100000,cnt,j=0;
    for (int i = num1;i<=num2;i++){
        int sum =0;
        j = i;
        cnt =0;
        while(j>0){
            int temp = 0;
            temp = j / 10;
            j = temp;
            cnt++;
        }
        char arr[cnt];
        sprintf(arr,"%d",i);
        for(int j=0;j<sizeof(arr)/sizeof(arr[0]);j++){
        int digit = arr[j] - '0';
        sum += pow(digit,cnt);
        }
        if(i == sum){
            printf("%d ",i);
        }
    }
}