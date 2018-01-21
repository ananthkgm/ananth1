#include<stdio.h>
int main()
{
char string[60];
int words=0,i=o;
scanf("%s",&string[i]);
while(string[i]!='\0')
{
if((string[i]==' ')||(string[i]=='\n')||(string[i]=='\t'))
{
words+=1;
}
i++;
}
printf("total words %d",words);
return 0;
}
