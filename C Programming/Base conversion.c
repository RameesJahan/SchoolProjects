#include<stdio.h>
#include<conio.h>
void main(){
	int n,x,a,i,j,b[3]={2,8,16};
	char s[20];
	printf("Enter the decimal number : ");
	scanf("%d",&n);
	for(i=0;i<3;i++){
		x = n;
		j = 0;
		while(x>0){
			a=x%b[i];
			if(a>=10)
				s[j]=a+55;
			else
				s[j]=a+48;
			x=x/b[i];
			j++;
		}
		s[j]='\0';
		switch(i){
			case 0: printf("\n\tBinary equivqlqnt of %d      : %s",n,strrev(s));
			break;
			case 1: printf("\n\tOctal equivqlqnt of %d       : %s",n,strrev(s));
			break;
			case 2: printf("\n\tHexadecimal equivqlqnt of %d : %s",n,strrev(s));
			break;
		}
	}
	getch();
}
