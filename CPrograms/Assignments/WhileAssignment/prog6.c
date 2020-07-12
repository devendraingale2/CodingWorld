#include<stdio.h> 

void main()
{
    int n, i, sum = 0;
    n=100;
    i=1;
 
 	while(i<n)
    {
        sum += i; 
      	i++;
    }
 
    printf("Sum = %d",sum);
 
}
