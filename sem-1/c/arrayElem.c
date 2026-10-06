#include<stdio.h>
int main(){

	int arr[10];
	int i,n,sum=0;
	
	printf("Enter the limit : ");
	scanf("%d",&n);
	
	printf("Enter the elements : ");
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
	
	printf("The elements are ");
	for(i=0;i<n;i++){
	printf("%d\n",arr[i]);
	sum=sum+arr[i];
	}
	printf("sum of all elements is %d\n",sum);
	return 0;
}
