/*
 
         a
       a b
     a b c
   a b c d

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
		e=1;
		while(c<d+1){
			printf("%c",(char)(e+96));
			e++;
			c++;
		
		}
		printf("\n");
	a++;
	d++;
	f++;	
    }
}
