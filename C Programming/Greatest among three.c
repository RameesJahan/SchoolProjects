#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b){
		if(b<c) 
			printf("%d is greater",c);
		else
			printf("%d is greater",b);
	}
	else{
		if(a<c)
			printf("%d is greater",c); 
		else
			printf("%d is greater",a);
	}
}
