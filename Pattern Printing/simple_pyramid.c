#include <stdio.h>
#include <unistd.h>


// Right Half Pyramid Pattern
// Star Pattern
// int main(){
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }
// *
// * *
// * * *
// * * * *
// * * * * *

//--------------------------------------------------

// Right Half Pyramid Pattern
// Number Pattern
// int main(){
//     for (int i=1;i<=6;i++){
//         for(int j=1;j<i;j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

//--------------------------------------------------

// Right Half Pyramid Pattern
// Character Pattern
// int main(){
//     for(int i = 65;i <= 65+5;i++){
//         for(int j = 65;j <= i;j++){
//             printf("%c ",j);
//         }
//         printf("\n");
//     }
// }
// A
// A B
// A B C
// A B C D
// A B C D E
// A B C D E F

//--------------------------------------------------

// Left Half Pyramid Pattern
// Star Pattern
// int main()
// {
//     char ch = '*';
//     for (int i = 0; i <= 5; i++)
//     {
//             for(int j = 5 - i;j>=0;j--)
//                 printf(" ");

//             for(int k = 0;k<=i;k++)
//                 printf(" *");
//         printf("\n");
//     }
// }
//       *
//      **
//     ***
//    ****
//   *****
//  ******

//--------------------------------------------------

// Left Half Pyramid Pattern
// Number Pattern
// int main(){
//     for(int i = 1;i<=5;i++){
//         for(int j = 5 - i;j>=0;j--)
//             printf(" ");

//         for(int k = 1;k <= i;k++)
//             printf("%d",k);
//         printf("\n");
//     }
// }
//     1
//    12
//   123
//  1234
// 12345

//--------------------------------------------------

// Left Half Pyramid Pattern
// Character Pattern
// int main(){
//     for(int i = 65;i<=65+5;i++){
//         for(int j = 5 + 65 - i;j>=0;j--)
//             printf(" ");

//         for(int k = 65;k <= i;k++)
//             printf("%c",k);
//         printf("\n");
//     }
// }
//      A
//     AB
//    ABC
//   ABCD
//  ABCDE
// ABCDEF

//--------------------------------------------------

// Full Pyramid Pattern
// Star Pattern
// int main()
// {
//     char ch = '*';
//     for (int i = 0; i <= 5; i++)
//     {
//             for(int j = 5 - i;j>=0;j--)
//                 printf(" ");

//             for(int k = 0;k<=i;k++)
//                 printf(" *");
//         printf("\n");
//     }
// }
//        *
//       * *
//      * * *
//     * * * *
//    * * * * *
//   * * * * * *

//--------------------------------------------------

// Full Pyramid Pattern
// Number Pattern
// int main(){
//     for(int i = 1;i<=5;i++){
//         for(int j = 5 - i;j>=0;j--)
//             printf(" ");

//         for(int k = 1;k <= i;k++)
//             printf("%d ",k);
//         printf("\n");
//     }
// }
//      1 
//     1 2
//    1 2 3
//   1 2 3 4
//  1 2 3 4 5

//--------------------------------------------------

// Left Half Pyramid Pattern
// Character Pattern
// int main(){
//     for(int i = 65;i<=65+5;i++){
//         for(int j = 5 + 65 - i;j>=0;j--)
//             printf(" ");

//         for(int k = 65;k <= i;k++)
//             printf("%c ",k);
//         printf("\n");
//     }
// }
//       A 
//      A B
//     A B C
//    A B C D
//   A B C D E
//  A B C D E F

//--------------------------------------------------

// Inverted Full Pyramid Pattern
// Star Pattern
// int main(){
//     for(int i = 0;i<=10;i++){
//         for(int j = 0; j < i;j++)
//             printf(" ");
//         for(int k = 10;k>=i;k--)
//             printf(" *");
//         printf("\n");
//     }
// }
//  * * * * * * * * * * *
//   * * * * * * * * * *
//    * * * * * * * * *
//     * * * * * * * *
//      * * * * * * *
//       * * * * * *
//        * * * * *
//         * * * *
//          * * *
//           * *
//            *

//--------------------------------------------------

// Inverted Full Pyramid Pattern
// Number Pattern
// int main(){
//     for(int i = 10;i >= 2 ;i--){
//         for(int j = i;j<10;j++)
//             printf(" ");
        
//         for(int k = 1;k<i;k++)
//             printf("%d ",k);
//         printf("\n");
//     }
// }
// 1 2 3 4 5 6 7 8 9 
//  1 2 3 4 5 6 7 8
//   1 2 3 4 5 6 7
//    1 2 3 4 5 6
//     1 2 3 4 5
//      1 2 3 4
//       1 2 3
//        1 2
//         1

//--------------------------------------------------

// Diamond Pattern
// Star Pattern
// int main(){
//     int num = 6;
//     for(int i=0;i<=num;i++){
//         for(int j=num-1;j>=i;j--)
//             printf(" ");

//         for(int k=0;k<i;k++)
//             printf("* ");
//         printf("\n");
        
//     }
//     for(int i=num-1;i>=0;i--){
//         for(int j=num-1;j>=i;j--)
//             printf(" ");

//         for(int k=0;k<i;k++)
//             printf("* ");
//         printf("\n");   
//     }
// }
//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
// * * * * * *
//  * * * * *
//   * * * *
//    * * *
//     * *
//      *

//--------------------------------------------------

// Diamond Pattern
// Number Pattern
// int main(){
//     int num = 10;

//     for(int i = 2;i<num+2;i++){
//         for(int j = num;j>=i;j--)
//             printf(" ");

//         for(int k=1;k<i;k++)
//             printf("%d ",k);
//         printf("\n");
//     }
//     for(int i = num;i>=0;i--){
//         for(int j = num;j>=i;j--)
//             printf(" ");

//         for(int k=1;k<i;k++)
//             printf("%d ",k);
//         printf("\n");
//     }
// }
//          1 
//         1 2
//        1 2 3
//       1 2 3 4
//      1 2 3 4 5
//     1 2 3 4 5 6
//    1 2 3 4 5 6 7
//   1 2 3 4 5 6 7 8
//  1 2 3 4 5 6 7 8 9
// 1 2 3 4 5 6 7 8 9 10
//  1 2 3 4 5 6 7 8 9
//   1 2 3 4 5 6 7 8
//    1 2 3 4 5 6 7
//     1 2 3 4 5 6
//      1 2 3 4 5
//       1 2 3 4
//        1 2 3
//         1 2
//          1

//--------------------------------------------------

// Floyd's Triangle Pyramid Pattern
// Number Pattern

// int main(){
//     int num = 10,c=1;

//     for(int i = 2;i<=num;i++){
//         for(int j = 1;j<i;j++){
//             printf("%d ",c);
//             c++;
//         }
//         printf("\n");
//     }
// }
// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20 21
// 22 23 24 25 26 27 28
// 29 30 31 32 33 34 35 36
// 37 38 39 40 41 42 43 44 45

//--------------------------------------------------

// Hollow Star Right Triangel Pattern
// Star Pattern

// int main(){
//     int num = 10;
//     for(int i = 1;i<=num;i++){
//         for(int j=1;j<=i;j++){
//             if( j == 1 || j == i || i == num){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
// }
// * 
// * *
// *   *
// *     *
// *       *
// *         *
// *           *
// *             *
// *               *
// * * * * * * * * * *

//--------------------------------------------------

// Hollow Star Pyramid Pattern
// Star Pattern

// int main(){
//     int num = 10;
//     for(int i = 1;i<=num;i++){
//         for(int j = 10;j>i;j--)
//         printf(" ");

//         for(int k = 1;k<=i;k++)
//             if(k == 1 || k == i || i == num){
//             printf("* ");
//         }
//         else{
//             printf("  ");
//         }
//         printf("\n");
//     }
// }
//          * 
//         * *
//        *   *
//       *     *
//      *       *
//     *         *
//    *           *
//   *             *
//  *               *
// * * * * * * * * * *

//--------------------------------------------------

// Hollow Star Pyramid Pattern
// Star Pattern

int main(){
    int num = 12;
    for(int i = 1;i<=num;i++){
        for(int j = num;j>i;j--)
        printf(" ");

        for(int k = 1;k<=i;k++)
        if(k == 1 || k == i ){
        printf("%d ",k);
         sleep(1);
        }
        else{
            printf("  ");
        }
        printf("\n");
    }
    for(int i = num-1;i>=1;i--){
        for(int j = i;j<=num-1;j++)
        printf(" ");

        for(int k = 1;k<=i;k++)
        if(k == 1 || k == i ){
        printf("%d ",k);
        sleep(1);
        }
        else{
            printf("  ");
        }
        printf("\n");
    }
    }
