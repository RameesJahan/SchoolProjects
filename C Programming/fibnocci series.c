#include<stdio.h>
#include<conio.h>
int main(){
	int i ,a = 0,b = 1,n,temp;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("Fibnoccu Series : ");
	printf("%d\t",a);
	for(i=0;i<n - 1;i++){
		printf("%d\t.",b);
		temp = b;
		b = a+b;
		a = temp;
	}
	getch();
}
