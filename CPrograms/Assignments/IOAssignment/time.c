

#include<stdio.h>

void main(){

	float hr,min,totmin;
	printf("Enter Hours:");
	scanf("%f",&hr);
	printf("\nEnter Minutes:");
	scanf("%f",&min);


	totmin=(hr*60)+(min);
	printf("\nTotal Minutes:%f\n",totmin);

}
