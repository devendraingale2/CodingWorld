
#include<stdio.h>

void main(){

	int start,n,add,mul,i;
	printf("Enter n Value:");
	scanf("%d",&n);
	
	i=1;
	start=i;
	add=0;
	mul=1;
	while(i<n){
	
		if(i%2==0){
			add=add+i;
			
		}
		if(i%2!=0){
			mul=mul*i;
		}
		i++;
	}

	printf("\nSum of %d to %d : %d",start,n,add);
	printf("\nMul of %d to %d : %d\n",start,n,mul);
}
