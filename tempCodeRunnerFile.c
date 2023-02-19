// Online C compiler to run C program online
#include <stdio.h>
int fact(int n){
if (n == 0)
return 1;
else
return n * fact(n-1);
}

int main() {
    // Write C code here
    int n;
    
    printf("enter a number: ");
    scanf("%d", &n);
    int fct = fact(n);
    printf("factorial of %d is %d\n", n,fct);
    return 0;
}