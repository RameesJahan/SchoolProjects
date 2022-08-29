#include<stdio.h>
#include<conio.h>
long factorial(int);
void main(){
	int x,c;
	long f;
	printf("\n\tEnter the number : ");
	scanf("%d",&x);
	f = factorial(x);
	printf("\tFactorial of %d = %ld",x,f);
	getch();
}
long factorial(int n){
	if(n==0){
		return 1;
	}else{
		return n*factorial(n-1);
	}
}
