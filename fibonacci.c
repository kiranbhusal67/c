
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int a = 0, b = 1, next;
    printf("Fibonacci Series: ");
    for(int i = 1; i <= n; i++) {
        if(i == 1) {
            printf("%d ", a);
        } else if(i == 2) {
            printf("%d ", b);
        } else {
            next = a + b;
            printf("%d ", next);
            a = b;
            b = next;
        }
    }
    printf("\n");
    return 0;
}
