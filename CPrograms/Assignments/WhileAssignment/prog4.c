 
#include<stdio.h> 

void main() 
{

    float fah, cel;
    float i=1;
    int n=100;
    while(i<n){
        
    cel = (5.0/9) * (i - 32);
            
    printf("\n%.2f°F is same as %.2f°C", i, cel);
    i++;
    }

}

