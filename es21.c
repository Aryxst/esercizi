#include <stdio.h>

int main() {
	char stringa[100]; // Definisci lunghezza max
	scanf("%s", stringa); // Assegna valore
	int i = 0;
	while (stringa[i] != '\0') { // Ripeti finch� il char � valido
		printf("%d\t", stringa[i]); // Stampa ogni char
		i++;
	}
	return 0;
}
