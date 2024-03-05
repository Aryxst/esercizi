#include <stdio.h>
#include <math.h>
int main() {
	int count, temp, max, min, media, sum;
	printf("Iterazioni:");
	scanf("%d", &count);

	int i = 0;
	for(i; i<count; i++) {
		printf("Inserisci il numero %d:", i+1);
		scanf("%d", &temp);
		if(max < temp) {
			max = temp;
		}
		if (min > temp) {
			min = temp;
		}
		sum += temp;
		
	}
	media = sum/count;
	printf("\nMIN:%d", min);
	printf("\nMAX:%d", max);
	printf("\nMEDIA:%d", media);
	printf("\nSOMMA:%d", sum);
	return 0;

}
