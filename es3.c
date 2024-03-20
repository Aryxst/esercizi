#include <stdio.h>
// es c
int main() {
    int a, b, c;
    printf("Inserisci tre numeri interi: ");
    scanf_s("%d %d %d", &a, &b, &c);

    // Ordina i numeri in ordine non decrescente
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    // Stampare i numeri in ordine non decrescente
    printf("Output: %d %d %d\n", a, b, c);

    return 0;
}
