#include<stdio.h>

int min(int x, int y){
    if (x > y) return y;
    else return x;
}
int HCF (int a, int b){
    int hcf = 1;
    for (int i = 1; i <= min(a, b); i++){
        if (a%i == 0 && b%i == 0){
            hcf = i;
        }

    }
    return hcf;
}
int main (){
    int b;
    int a;
    
        printf("Enter 1st number: ");
        scanf("%d", &a);

        printf("Enter 2nd number: ");
        scanf("%d", &b);
   
    int gcd = HCF(a, b);
    printf("The hcf of %d and %d is %d\n", a,b,gcd);
    return 0;

}
