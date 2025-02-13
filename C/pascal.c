#include <stdio.h>

void pascalTriangle(int n) {
    for (int i = 0; i < n; i++) {
        int val = 1;  
        for (int j = 0; j <= i; j++) {
            printf("%d ", val);  
            val = val * (i - j) / (j + 1);  
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the range:");
    scanf("%d", &n); 
    pascalTriangle(n);  
    return 0;
}
