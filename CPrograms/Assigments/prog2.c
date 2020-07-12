#include<stdio.h>
void main(){

int a=10,b=20;
if((a && b++) && (a++ || ++b)){
	printf("a : %d\n",a);
	printf("b : %d\n",b);
}
printf("out of if");
}

//Here,all valyes are positive and none is zero ,hence all anding operations will be true,hence if loop is executed.
