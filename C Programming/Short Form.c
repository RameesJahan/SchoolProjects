#include<stdio.h>
#include<ctype.h>
void main(){
	char s[100];
	int i;
	printf("\nEnter the string : ");
	gets(s);
	printf("\tShort form is %c",toupper(s[0]));
	for(i=0;s[i]!='\0';i++){
		if(s[i]==' ' && s[i+1]!=' '){
			printf("%c",toupper(s[i+1]));
		}
	}
	getch();
}
