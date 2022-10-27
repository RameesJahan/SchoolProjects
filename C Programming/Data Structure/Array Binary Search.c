#include<stdio.h>
int binarySearch(int arr[],int l,int r,int x){
	if(r>=l){
		int mid = l+(r-l)/2;
		
		if(arr[mid]==x) 
			return mid;
		
		if(arr[mid]>x) 
			return binarySearch(arr,l,mid-1,x);
		
		return binarySearch(arr,mid+1,r,x);
	}
	return -1;
}

int main(){
	int arr[] = {2,3,4,10,40};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x;
	printf("Enter Number TO Search :");
	scanf("%d",&x);
	int result = binarySearch(arr,0,n-1,x);
	(result == -1)? printf("Element %d is not in Array",x):
					printf("Element %d is at index %d ",x,result);
	return 0;
}
