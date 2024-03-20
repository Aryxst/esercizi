#include <stdio.h>
#include <math.h>
// es q
int main() {
   int grandezza, k, i;
    printf("Quanti valori vuoi inserire: ");
    scanf("%d", &grandezza);

    int numeri[grandezza];

     for (i = 0; i < grandezza; i++) {
        printf("Dammi il numero %d: ", i + 1);
        scanf("%d", &numeri[i]);
    }
	for(i = 0; i < grandezza; i++) {
		int j;
		// Questo vettore contiene tutti i moduli di ogni numeri[i], ho osservato i risultati di più numeri e determinato che se contiene almeno uno zero allora il numero è primo
		// es. 8 => 0       2       0       3       2       1 => quindi non è primo
		// es. 7 => 1       1       3       2       1 => quindi è primo
		int num = numeri[i];
		for(j = 2; j < num; j++) {
			// Stampa i moduli di ogni numero compreso tra numeri[i] e 2
			int mod = (num % j);
			// Alla prima occorrenza di 0 esci dal loop, perchè i numeri primo non ammettono un modulo pari a 0
			if(mod == 0) {
				printf("Il numero %d non e' primo!", num);
				break;
			} 
			// Questo presuppone che tuttle le altre occorrenze fossero diverse da 0 e quindi il numero fino ad ora era primo
			else if (mod!= 0 && j == num -1) {
				printf("Il numero %d e' primo!", num);
			}
		}
		printf("\n");
	}
}
