#include <stdio.h>
// es l

int main() {
	// "risultato" del precedente elevamento, "b" � la base, "e" � l'esponente, "i" invece serve per il loop
	int risultato, b, e, i;
	printf("Inserisci la base:");
	scanf("%d", &b);
	printf("Inserisci l'esponente:");
	scanf("%d", &e);
	risultato = b;
	// Stampa la base
	printf("%d\t", b);
	// Fai un loop con condizione i � maggiore dell'esponente - se stesso
	for(i = 0; i<e-1 ; i++) {
		risultato *=  b;
		printf("%d\t", risultato);
	}
	return 0;
}


