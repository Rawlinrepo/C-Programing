#include <stdio.h>
#include <stdbool.h>

bool prime_num(int num){
int cnt;
   for (int i =1; i<=num ; i++){
    if (num % i == 0){
        cnt++;
    }
   }
   if (cnt>2){
    return false;
   }
   else{
    return true;
   }
}

int main(){
    int num;

    printf("Enter number to check if prime\n");
    scanf("%d",&num);

    if (prime_num(num)){
        printf("%d is prime",num);
    }
    else{
        printf("%d is not prime",num);
    }
    return 0;
}