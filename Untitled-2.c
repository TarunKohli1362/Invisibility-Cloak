#include<stdio.h>
int main()
{
int x;
for(x=0;x!=123;)
{
scanf("%d",&x);
//update x
printf("english Letter for this entered number is %c",x);
printf("\nASCII value for this letter is %d",x-'0');
if(x==123)
{
return 0;
}
else
{ 
printf("\nyour entered value is %d",x);
}
printf("\n");
}
return 0;
}