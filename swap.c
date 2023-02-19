// Online C compiler to run C program online
#include <stdio.h>
void swap(int *x, int *y){
    int z = *x;
    *x = *y;
    *y = z;
    return;
    
}

int main() {
    int a,b;
    printf("a: ");
    scanf("%d", &a);

    printf("b: ");
    scanf("%d", &b);

    swap(&a, &b);
    printf("a is %d. b is %d.", a, b);

    return 0;
}