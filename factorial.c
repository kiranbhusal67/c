#include <stdio.h>

int main() {
    int num,factorial,s=1;
    

    
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    
    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        
        for (int i = 1; i <= num; i++) {
             s= s*i;
        }

        
        printf("Factorial of %d = %d\n", num, s);
    }

    return 0;
}
