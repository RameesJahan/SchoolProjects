#include<stdio.h>
int main(){
	int arr[100],s,c,n;
	printf("Enter no. of Elements in Array : ");
	scanf("%d",&n);
	printf("Enter %d Numbers : ",n);
	for(c =0;c<n;c++)
		scanf("%d",&arr[c]);
	
	printf("Enter a Number to search : ");
	scanf("%d",&s);
	
	for(c = 0;c<n;c++){
		if(arr[c]==s){
			printf("%d is presnt at location %d.\n",s,c+1);
			break;
		}
	}
	if(c==n)
		printf("%d is not found.\n",s);
		
	return 0;
}
