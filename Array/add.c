#include <stdio.h>

int main(){
    int arr1[4][4] = {42, 7, 93, 18, 65, 21, 54, 89, 36, 12, 77, 5, 90, 33, 48, 26};
    int arr2[4][4] = {42, 7, 93, 18, 65, 21, 54, 89, 36, 12, 77, 5, 90, 33, 48, 26};

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            arr1[i][j] += arr2[i][j];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
}