#include<stdio.h>
int main(){
	int as,bs,ms,i,j;
	int a[10],b[10],c[20];
	
	printf("Enter First Array Size : ");
	scanf("%d",&as);
	printf("Enter First Array Elements : ");
	for(i = 0;i<as;i++) 
		scanf("%d",&a[i]);

	printf("Enter Second Array Size : ");
	scanf("%d",&bs);
	printf("Enter Second Array Elements : ");
	for(i = 0;i<bs;i++) 
		scanf("%d",&b[i]);	
	
	for(i=0;i<as;i++)
		c[i] = a[i];
	
	ms = as+bs;
	for(i = 0,j=as;j<ms&&i<bs;i++,j++)
		c[j]=b[i];
		
	printf("\n a[%d] Array Elements After Merging\n",ms);
	for(i=0;i<ms;i++)
		printf("%d \t",c[i]);
		
	return 0;	
}
