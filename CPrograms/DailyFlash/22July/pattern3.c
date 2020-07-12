/*
 
      1
     2 3
    4 5 6
   7 8 9 10

   */

#include<stdio.h>

int main() {
    int a=1,b=1,c=1,d=1,e=1,f=1;

    while(a<5){
	    	b=f;
	    	while(b<5){
			printf(" ");
			b++;
		}
	    	c=1;
		while(c<d+1){
			printf(" %d",e);
			e++;
			c++;
		
		}
		printf("\n");
	a++;
	d++;
	f++;
    
    }
}
