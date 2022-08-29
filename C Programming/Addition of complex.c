#include<stdio.h>
struct complex{
	float real,imaginary;
};
int main(){
	struct complex nl, n2, sum; 
	printf("Enter real and imaginary part of first complex number: "); 
	scanf("%f %f",&nl.real,&nl.imaginary); 
	printf("First complex number: %0.2f+i%0.2f", nl.real, nl.imaginary); 
	printf("\nEnter real and imaginary part of second complex number: ");
	scanf("%f %f",&n2.real, &n2.imaginary); 
	printf("\nSecond complex number: %0.2f+i%0.2f", n2.real, n2.imaginary);
	sum.real=nl.real+n2.real;
	sum.imaginary=nl.imaginary+n2.imaginary;
	printf("\n\nsum of two complex no: is %0.2f+i%0.2f", sum.real, sum.imaginary);
	return 0; 
}
