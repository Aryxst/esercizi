#include <stdio.h>
#include <math.h>
int main() {
	int a, b, c, max, min, media, sum;
	printf("A:");
	scanf("%d", &a);
	printf("B:");
	scanf("%d",&b);
	printf("C:");
	scanf("%d", &c);
	
	// MAX
	if(a>b && a>c) {
		max = a;
		printf("a e' maggiore di tutti");
	} 
	else if (b>c) {
		max = b;
		printf("b e' maggiore di tutti");
	}
	else if (b<c) {
		max = c;
		printf("c e' maggiore di tutti :O");
	} else {
		printf("i numberi sono tutti uguali");
	}
	// MIN
	if (max >= b && max >= c) {
		min = a;
	} else if (max >= a &&  max >= c) {
		min  = b;
		
	}
	else if (max >= a && max >= b) {
		min = c;
	}
	sum = a+b+c;
	media = sum/3;
	printf("\nMIN:%d", min);
	printf("\nMAX:%d", max);
	printf("\nMEDIA:%d", media);
	printf("\nSOMMA:%d", sum);
	return 0;

}
