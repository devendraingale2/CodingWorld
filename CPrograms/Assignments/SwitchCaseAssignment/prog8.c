#include<stdio.h>

void main(){

	int a;
	printf("Enter a Number:");
	scanf("%d",&a);

	switch(a){
	
		case 1:
			printf("One.");
			break;
		case 2:
                        printf("Two.");
                        break;
		case 3:
                        printf("Three.");
                        break;
		case 4:
                        printf("Four.");
                        break;
		case 5:
                        printf("Five.");
                        break;
		default:
                        printf("Number not between 1 to 5");
                        break;
	
	}

}
