
#include<stdio.h>

int sum=0,fac=1;

int factorial(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * factorial(n-1));  
} 
void main(){

	int num,newno,fact=0,rem=0;
	
	printf("\nEnter Number:");scanf("%d",&num);
	newno=num;
	while(num!=0){
	
		rem=num%10;
		num=num/10;
		fact+=factorial(rem);

	}

	if(newno==fact){
		printf("\n%d  is a Strong Number.",newno);
	}
	else{
		printf("\n%d is not a Strong Number\n",newno);
	}



}
