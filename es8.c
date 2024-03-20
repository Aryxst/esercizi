#include <stdio.h>
// es h
int main() {
	int tot,sum,i;
	printf("Inserisci la quantita' di numeri da sommare:");
	scanf("%d", &tot);

	for(i = 0; i<tot; i++) {
		sum += i + 1;
	}
	printf("Somma: %d", sum);
	return 0;
}
