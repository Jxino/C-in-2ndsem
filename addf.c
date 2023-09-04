#include <stdio.h>

int add(int n) {
    int res = 0;

    for (int i = 0; i <= n; i++) {
        res += i;
    }
    return res;
}

int main() {
    int number;
    int result;
    
    printf("Please enter an integer.\n");
    scanf("%d", &number);
    result = add(number);
    printf("Sum is %d.\n", result);
    return 0;
}