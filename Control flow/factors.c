#include <stdio.h>

int main(){
    int num =86;
    printf("Factors of %d are: ",num);
    for(int i =1;i<=num;i++){
        if(num % i  == 0){
            printf("%d ",i);
        }
    }
}