
#include<stdio.h>
void main(){

	int n=50;
	int i=5;
	int a=1;

	printf("Numbers divisibly by 5 and even :");
	while(i<n){
	
		if(i%2==0 && i%5==0){
		
			printf(" %d",i);
		
		}
		i++;
	}

}
