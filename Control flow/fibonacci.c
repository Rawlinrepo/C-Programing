#include <stdio.h>

int main(){
    int num,a = 0,b = 1,c;
    printf("Enter the N value of Fibonacci Series : ");
    scanf("%d",&num);

    for(int i = 1;i<=num;i++){
        printf("%d ",a);
        c = a + b;
        a = b;
        b = c; 
    }

}