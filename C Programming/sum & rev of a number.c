#include<stdio.h>
int main(){
	int i,a,n,k=0,sum=0,rev[10];
	printf("Enter a number:");
	scanf("%d",&n);
	int x = n;
	while(x>0){
		a = x%10;
		sum+=a;
		rev[k] = a;
		x = x/10;
		k++;
	}
	printf("Sum of digits of %d is %d \n",n ,sum);
	printf("Reverse of %d is :",n);
	for(i = 0;i<k;i++){
		printf("%d",rev[i]);
	}
}
