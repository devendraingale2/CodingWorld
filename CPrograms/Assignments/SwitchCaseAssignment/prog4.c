#include<stdio.h>
int main(){
	float a = 5.2;
	switch((int)a){
		case 1:
			printf("one\n");
			break;
		case 5:
			printf("five\n");
			break;
		case 2:
			printf("two\n");
			break;
		default:
			printf("else\n");
			break;
}
return 0;
}


//Here float is typcasted to int hence 5.2 becomes 5 and thus case 5 exectes and breakes.
