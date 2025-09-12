#include <stdio.h>
#include <string.h>

int main(){
    char arr[4][10] = {"noy","rawlin","shello","ashutosh"};
    
    for(int i =0;i<3;i++){
        char arr2[10];
        for(int j =0;j<4;j++){
            if(arr[i][0] > arr[j][0]){
                strcpy(arr2, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], arr2);

            }
        }
    }
    for(int i =0;i<4;i++){
        printf("%s ",arr[i]);
    }
}