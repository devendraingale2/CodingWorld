#include<stdio.h>

void main(){

	int a,b,c,d,e,avg=0;
	char ch;
	printf("Enter Marks of 5 Subjects:\n");
	scanf("%d\n",&a);
	scanf("%d\n",&b);
	scanf("%d\n",&c);
	scanf("%d\n",&d);
	scanf("%d",&e);
	avg=(a+b+c+d+e)/5;
	
	if (avg<35){
		ch='F';
	}
	if (avg<60 && avg>=35){
		ch='C';
	}
	if(avg>=60 && avg <80){
		ch='B';
	}
	if(avg>=80 && avg<90){
		ch='A';
	}
	if(avg>=90 && avg<101){
                ch='O';
        }

	switch(ch){
	
		case 'F':
		       printf("Failed.");
		       break;
		case 'C':
		       printf("Grade C");
		       break;
		case 'B':
		       printf("Grade B");
		       break;
		case 'A':
		       printf("Grade A");
		       break;
		case 'O':
		       printf("Grade O.Extra Outstanding.");
	}

}
