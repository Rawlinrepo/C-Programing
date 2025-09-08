#include <stdio.h>

int area(int l,int w){
    return l * w;
}

int perimeter(int l, int w){
    return (2 * (l + w));
}

int main(){
    int l,w;
    printf("Enter the Length : ");
    scanf("%d",&l);

    printf("Enter the width : ");
    scanf("%d",&w);

    printf("The Area of rectangle is : %d\n",area(l,w));
    printf("The Perimeter of rectangle is : %d\n",perimeter(l,w));
    
}