#include<stdio.h>
#include<string.h>
void main(){
	char s[50],r[50];
	
	printf("\n\tEnter the string : ");
	gets(s);
	strcpy(r,s);
	if(strcmp(strrev(s),r) == 0){
		printf("\n\t%s is palindrome",r);
	}else{
		printf("\n\t%s is not palindrome",r);
	}
	getch();
}
