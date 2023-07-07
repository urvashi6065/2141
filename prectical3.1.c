/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int a;
    int b;
    int x;
    
    
    printf("enter 1st number");
    scanf("%i",&a);
    printf("enter 2nd number");
    scanf("%i",&b);
     
     x=a;
     a=b;
     b=x;
     
     printf("%i\n",a);
     printf("%i\n",b);
     
     

    return 0;
}
