#include<stdio.h>
int main(){
	int m,i,p =0;
	printf("Enter a number:");
	scanf("%d",&m);
	if(m == 0|| m== 1) p=1;
	for(i = 2;i<=m/2;i++){
		if(m%i == 0){
			p = 1;
			break;
		}
	}
	if(p==0)
		printf("%d is PRIME",m);
	else
		printf("%d is NOT PRIME",m);
}
