#include<stdio.h>
int main(){

	int mark;
	
	printf("Enter the mark obtained : ");
	scanf("%d",&mark);
	
	if(mark>=90){
	printf("Your grade is A!");
	}
	else if(mark>=70){
	printf("Your grade is B!");
	}
	else if(mark>=50){
	printf("Your grade is C!");
	}
	else if(mark>=40){
	printf("Your grade is D!");
	}
	else{
	printf("You Failed!");
	}
	
	return 0;
}

