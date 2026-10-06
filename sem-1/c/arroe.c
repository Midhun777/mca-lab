#include<stdio.h>
int main(){

	int arr[10];
	int i,n;
	
	printf("Enter the limit : ");
	scanf("%d",&n);
	
	printf("Enter the elements : ");
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
	
	printf("Even Numbers are ");
	for(i=0;i<n;i++){
	
	if(arr[i]%2==0){
	printf("%d\n",arr[i]);
	}}
	
	printf("Odd Numbers are ");
	for(i=0;i<n;i++){
	if(arr[i]%2!=0){
	printf("%d\n",arr[i]);
	}}
	
	return 0;
}
