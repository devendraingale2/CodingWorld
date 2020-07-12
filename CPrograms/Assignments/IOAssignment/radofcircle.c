
#include<stdio.h>
void main(){

	float rad,area,cir;
	printf("Enter Radius:");
	scanf("%f",&rad);

	area=(22/7)*rad*rad;
	cir=(22/7)*2*rad;

	printf("\nArea of Circle:%f\n",area);
	printf("Circumference:%f\n",cir);

}
