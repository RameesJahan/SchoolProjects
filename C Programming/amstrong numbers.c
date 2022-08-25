#include<stdio.h>
#include<math.h>
int main(){
	int n,lb,ub,s,a,x,digits;
	char str[10];
	printf("\n Enter lower bound:");
	scanf("%d",&lb);
	printf("\n Enter Upper bound:");
	scanf("%d",&ub);
	printf("\n Amstrong numbers with in %d and %d \n\n",lb,ub);
	for(n = lb;n <= ub;n++){
		s = 0;
		x = n;
		digits = sprintf(str,"%d",n);
		while(x>0){
			a = x % 10;
			s = s+pow(a,digits);
			x = x/10;
		}
		if(s == n){
			printf("%d\t",n);
		}
	}
	getch();
}
