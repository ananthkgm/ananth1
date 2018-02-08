#include<stdio.h>
int main()
{
int a,b,temp;
printf("enter the numbers\n:");
scanf("%d%d",&a,&b);
printf("the numbers are %d and %d\n",a,b);
temp=a;
a=b;
b=temp;
printf("the swap of numbers are %d and %d\n",a,b);
return 0;
}
