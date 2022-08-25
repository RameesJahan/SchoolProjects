#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,r,k;
	printf("Enter no. of lines :");
	scanf("%d",&r);
	for(i=1;i<=r;i++){
		printf("\n\t\t");
		for(j =1;j<=r-i;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf(" *");
		}
	}
	getch();
}
