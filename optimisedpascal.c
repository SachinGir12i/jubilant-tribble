#include <stdio.h>

// int fact(int n){
//     if (n == 1){
//         return 1;
//     }
//     return n*fact(n-1);
// }

// int combination(int x, int y){
//     if (y == 0 || x == y){
//         return 1;
//     }
//     return fact(x)/(fact(y) * fact(x - y));
// }

int main()
{
    int n;
    do{
         printf("Enter the hight of triangle: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        for (int s = 0; s < (n-i); s++) {
            printf(" ");
        }
        int first = 1;
        for (int j = 0; j <= i; j++){
           
            printf("%d ", first);
            first = first * (i - j)/(j + 1);
        }
        printf("\n");
    }        
    }while (n>0);
   
    return 0;
}