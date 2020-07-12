#include<stdio.h>

void main(){

	int year=2020;
	if(year%4==0 && year%100 != 0 || year %400 ==0 ){
		printf("%d year is leap year",year);
	}

}

//missing year variable in printf()
//2020 is leap year and it will be printed.
