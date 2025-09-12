#include <stdio.h>
#include <string.h>

int main(){
    char arr[4][10] = {"noy","rawlin","shello","ashutosh"};
    char arr2[10];
    for(int i =0;i<3;i++){
        
        for(int j =i+1;j<4;j++){
            if(strncmp(arr[i] ,arr[j],1)>0){
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