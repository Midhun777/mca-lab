#include<stdio.h>
int main(){

	int arr[100],i,n,key,found=0;
	
	printf("Enter the limit : ");
	scanf("%d",&n);
	printf("Enter the Elements : ");
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
	
	printf("Enter the element to find : ");
	scanf("%d",&key);
	
	for(i=0;i<n;i++){
		if(arr[i]==key){
			found=1;
			printf("Key found at position %d\n",i+1);
			break;
			}
		else{
		found=0;
		}}
		
		if(found==0){
		printf("Key not found");
		}
		
	return 0;
}

