#include <stdio.h>

int main(){
    int arr[4][4] = {42, 7, 93, 18, 65, 21, 54, 89, 36, 12, 77, 5, 90, 33, 48, 26};
    int arr2[4][4];

    for(int i =0;i<4;i++){
        for(int j =0;j<4;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("-----------\n");

    for(int i =0;i<4;i++){
        for(int j =0;j<4;j++){
            arr2[j][i] = arr[i][j];
        }
    }
    for(int i =0;i<4;i++){
        for(int j =0;j<4;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
}