#include <stdio.h>

int main() {
    int grandezza, k, i;
    printf("Quanti valori vuoi inserire: ");
    scanf("%d", &grandezza);

    int numeri[grandezza];
    for (i = 0; i < grandezza; i++) {
        printf("Dammi il numero %d: ", i + 1);
        scanf("%d", &numeri[i]);
    }

    printf("Quale valore k compreso tra 1 e 4 vuoi utilizzare: ");
    scanf("%d", &k);
    while (k < 1 || k > 4) {
        printf("Il valore di k deve essere compreso tra 1 e 4. Inserisci: ");
        scanf("%d", &k);
    }
    printf("Hai scelto il valore k = %d\n\n\n", k);
    for(i = 0; i< grandezza; i++) {
    	printf("Il valore numero %d sommato a \"K\" da: %d\n", i, k + numeri[i]);
	}
    return 0;
}
