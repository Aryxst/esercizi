#include <stdio.h>
#include <math.h>
// es d
int main() {
    int a, b, c;

    printf("Inserisci la lunghezza del primo lato (a): ");
    scanf("%d", &a);

    printf("Inserisci la lunghezza del secondo lato (b): ");
    scanf("%d", &b);

    printf("Inserisci la lunghezza del terzo lato (c): ");
    scanf("%d", &c);

    if (a + b > c && b + c > a && c + a > b) {
        printf("Si puo' costruire un triangolo\n");

        // Calcola il semiperimetro
        double semip = (a + b + c) / 2;

        // Calcola l'area utilizzando la formula di Erone
        double area = sqrt(semip * (semip - a) * (semip - b) * (semip - c));

        // Ora calcola l'altezza utilizzando l'area e uno dei lati come base
        // Puoi scegliere quale lato usare come base
        // Ad esempio, scegliamo il lato 'a' come base
        double h = (2 * area) / a;
		printf("La tua area e' %f\n", area);
		printf("Il tuo perimetro e' %f\n", 2 * semip);
        printf("L'altezza del triangolo rispetto al lato 'a' e': %lf\n", h);
    } else {
        printf("Non si puo' costruire un triangolo\n");
    }

    return 0;
}

