#include <stdio.h>

int main() {
   
    int a;
int b;

printf("enter 1st number");
scanf("%d",&a);
printf("enter 2nd number");
scanf("%d",&b);

a=a+b;
b=a-b;
a=a-b;

printf("%d\n",a);
printf("%d",b);

    return 0;
}