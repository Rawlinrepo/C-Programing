#include <stdio.h>

int main(){
    int num;
    printf("Enter the number of which table you want : ");
    scanf("%d",&num);

    for(int i = 1;i<11;i++){
        printf("%d X %d = %d\n",num,i,num*i);
    }
}