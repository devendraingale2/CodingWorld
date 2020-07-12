#include <stdio.h>
 
void main()
{
    int num1, num2, num3;
 
    printf("Enter the values of num1, num2 and num3\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("num1 = %d\tnum2 = %d\tnum3 = %d\n", num1, num2, num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("num1 is the greatest among three \n");
	    if(num1%2==0){
	    	printf("And it is Even Number.");
	    }
	    else{
		    printf("And it is Odd Number.");
        }}
        else
        {
            printf("num3 is the greatest among three \n");
	     if(num3%2==0){
                printf("And it is Even Number.");
            }
            else{
                    printf("And it is Odd Number");
        }}

        }
    }
    else if (num2 > num3)
        printf("num2 is the greatest among three \n");
	 if(num2%2==0){
                printf("And it is Even Number.");
            }
            else{
                    printf("And it is Odd Number");
        }}

    else
        printf("num3 is the greatest among three \n");
	 if(num3%2==0){
                printf("And it is Even Number.");
            }
            else{
                    printf("And it is Odd Number");
        }}

}
