#include <stdio.h>
int main()
{
int sum=0,a,b,i,n;
scanf("%d%d%d",&a,&b,&n);
for(i=0;i<n;i++)
{
sum=a+b;
printf("%d\n",sum);
a=b;
b=sum;
}
return 0;
}
