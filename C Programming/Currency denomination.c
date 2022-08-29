#include<stdio.h>
#include<conio.h>
void main(){
	int i,x,sum,notes[10]={2000,500,200,100,50,20,10,5,2,1};
	long n;
	printf("\n\tEnter the amount: ");
	scanf("%ld",&n);
	sum = 0;
	printf("\n\tCurrency denomination of %ld\n",n);
	for(i=0;i<10;i++){
		x=n/notes[i];
		n=n%notes[i];
		printf("\n\t\t No of currencies of %4d = %d",notes[i],x);
		sum += x;
	}
	printf("\n\n\t Total No of currencies = %d",sum);
	getch();
	
}
