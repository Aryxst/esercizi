#include <stdio.h>
//es n
int main() {
	// Inserisco un valore di base "val", che assegno al prossimo valore di fattoriale => "prod"
	int i, val, prod;
	printf("Inserisci il valore di base:");
	scanf("%d", &val);
	prod = val;
	// Manda a console ogni risultato del fattoriale, con uno spazio usando "/t"
	for(i = val - 1 ; i > 1; i--) {
		prod *=  i;
		printf("%d\t", prod);
	}
	printf("\n\nIl tuo risulato e' %d", prod);
	return 0;
}
