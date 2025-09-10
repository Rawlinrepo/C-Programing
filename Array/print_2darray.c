#include <stdio.h>

int main(){
    int row ,col;

    printf("Enter the Rows and Coloum leaving space : ");
    scanf("%d%d",&row,&col);

    int arr[row][col];

    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            printf("Enter value for [%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The Matrix is\n");
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}