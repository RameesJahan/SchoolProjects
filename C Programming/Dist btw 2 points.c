#include <stdio.h>
#include <math.h>

int main() {
	float a, b, a1, b2, gdistance;
	printf("Input a: ");
	scanf("%f", &a);
	printf("Input b: ");
	scanf("%f", &b);
    printf("Input a1: ");
	scanf("%f", &a1);
	printf("Input b2: ");
	scanf("%f", &b2);
	gdistance = ((a1-a)*(a1-a))+((b2-b)*(b2-b));
	printf("Distance between the said points: %.4f", sqrt(gdistance));
	printf("\n");
	return 0;
}
