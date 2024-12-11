#include <stdio.h>
int main() {
    int n, a = 0, b = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            printf("%d ", a);
            continue;
        }
        if (i == 1) {
            printf("%d ", b);
            continue;
        }
        next = a + b;
        a = b;
        b = next;
        printf("%d ", next);
    }
    printf("\n");
    return 0;
}
