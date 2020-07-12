/*
 1
 1 2
 2 3 4
 4 5 6 7
 7 8 9 10 11

 */

#include<stdio.h>
void main(){

int a=1,b=1,c=1,d=1,e=0;

	while(b<6){
		a=1;
		a+=e;
		c+=e;
		while(d<c+1){
		
			printf("%d",a);
			d++;
			a++;
		}
		c++;
		e++;
		
	printf("\n");
	b++;
	}


}
