
#include<stdio.h>

void main(){

	int a,b,c;
	char ch;
	printf("Enter Two Numbers:");
	scanf("%d\n%d",&a,&b);

	c=a*b;
	if(c<0){
		ch='N';
	}
	if(c>0){
		ch='P';
	}
	if(c==0){
		ch='Z';
	}
	switch(ch){
		case 'N':printf("%d is negative",c);
			 break;
		case 'P':printf("%d is Positive",c);
                         break;

		case 'Z':printf("%d is Zero",c);
                         break;
		default:
			 printf("Enter Proper Integers..!!");
			break;

	
	}
}
