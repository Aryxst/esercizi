#include <stdio.h>

int main() {
    int a, b;
    printf("Dammi dei numeri\n");
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    printf("\nHai assegnato i valori: %d, %d\n",a, b);
    printf("Sto cambiando i valori...\n");
    b = a*2+3;
    a = a*2+1;
    printf("I tuoi nuovi valori sono: %d %d\n", a, b);
    return 0;
}
