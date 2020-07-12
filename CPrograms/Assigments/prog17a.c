#include <stdio.h>
 
void main()
{
    int num1, num2, num3,great;
 
    printf("Enter the values of num1, num2 and num3\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("num1 = %d\tnum2 = %d\tnum3 = %d\n", num1, num2, num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("num1 is the greatest among three \n");
	    great=num1;
        }
        else
        {
            printf("num3 is the greatest among three \n");
	    great=num3;
        }
    }
    else if (num2 > num3){
        printf("num2 is the greatest among three \n");
    great=num2;
    }
    else{
        printf("num3 is the greatest among three \n");
    great=num3;
    }
    if (great%2==0){
    	printf("And It is an Even Number.");
    }
    else{
    	printf("And it is an Odd Number.");
    }
}
