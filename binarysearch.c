#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[0],key,i,high,low,mid,n;
	printf("Enter the size of array:");
	scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	printf("Enter the elemnt to be search:");
	scanf("%d",&key);
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(low<=high){
		if(a[mid]<key)
		   low=mid+1;
		else if(a[mid]==key){
			printf("Element is found at loc %d",mid+1);
			break;
		}
		else{
			high=mid+1;
			mid=(low+high)/2;
		}
	}
	if(low>high){
		printf("Element is not found");
	}
	
}
