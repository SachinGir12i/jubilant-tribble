#include <stdio.h>
#include <string.h>
int swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int num[] = {3, 2, 8, 5, 0, 1, 7, 4};
    int turn = 0;
    
    do{ 
        turn = 0;  
        for (int i = 0; i < 7; i++){
            if (num[i] > num[i+1]){
                swap(&num[i], &num[i+1]);
                turn++;
            }
        }
        
        for (int j = 0; j < 8; j++){
            printf("%d", num[j]);
        }
        
    } while (turn > 0);
    return 0;
}
