#include <stdio.h>

int main() {
    int a, b;
    printf("How are you doing?\n");
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    if (a > b) {
        printf("A e' maggiore di B\n");
    }
    else {
        printf("B e' maggiore di A\n");
    };

    return 0;
}
