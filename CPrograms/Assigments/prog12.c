#include<stdio.h>

void main(){
	
	int num=360;
	if(num%2 ==0){
		printf("\n%d is divisible by 2",num);
	if(num%3 == 0){
		printf("\n%d is divisible by 3",num);
	if(num%5==0){
		printf("\n%d is divisible by 5",num);
	}
	else {
		printf("\n%d is not divisible by 5",num);
	}
	
	}
	else{
	printf("\n%d is not divisible by 3",num);
	}
	}
	else{
		printf("\n%d is not divisible by 2",num);
	}


}
