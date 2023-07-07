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
 float c;
 
 printf("enter 1st number");
 scanf("%d",&a);
 printf("enter 2nd number");
 scanf("%d",&b);
 
c=a;
a=b;
b=c;

printf("%d\n",a);
printf("%d",b);
    return 0;
}
