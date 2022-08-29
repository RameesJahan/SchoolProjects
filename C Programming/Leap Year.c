#include<stdio.h>
#include<conio.h>
void main()
{
	int y;
	printf("\n\tEnter the year to check: ");
	scanf("%d",&y);
	if( ((y%4==0)&&(y%100!=100)) || (y%400==0) )
	printf("\n\t%d is a leap year", y);
	else
	printf("\n\t%d is not a leap year", y);
	getch();
}

