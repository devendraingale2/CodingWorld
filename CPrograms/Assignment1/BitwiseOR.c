
#include<stdio.h>

void main(){


//1	
int x=11,y=11;
int z=x | y;
printf("%d|%d=%d\n",x,y,z);

//2     
x=9,y=10;
z=x | y;
printf("%d|%d=%d\n",x,y,z);

//3
x=-1,y=6;
z=x | y;
printf("%d|%d=%d\n",x,y,z);

//4
x=-1,y=2;
z=x | y;
printf("%d|%d=%d\n",x,y,z);
}
