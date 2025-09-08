#include <stdio.h>

int main(){
    int n,i,j;
    
    printf("Enter the N value : ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++){
        int cnt = 0;
        for ( j = 1 ; j <=i ; j++){
            if (i % j == 0){
                cnt++;
            }
        }
        if (cnt == 2){
            printf("%d\n",i);
        }
    }
}