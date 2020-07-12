
#include<stdio.h>

void main(){


//1	
int x=15,y=15;
int z=x & y;
printf("%d&%d=%d\n",x,y,z);

//2     
x=10,y=4;
z=x & y;
printf("%d&%d=%d\n",x,y,z);

//3
x=-1,y=6;
z=x & y;
printf("%d&%d=%d\n",x,y,z);

//4
x=-1,y=2;
z=x & y;
printf("%d&%d=%d\n",x,y,z);
}
