# power
#include<stdio.h>
int main(void)
{
int base,exponent,result=1;
clrscr();
printf("Enter base:");
scanf("%d",&base);
printf("Enter exponent:");
scanf("%d",&exponent);
int i=1;
while(i<=exponent)
{
result *=base;
i++;
}
printf("%d^%d=%d",base,exponent,result);
return 0;
}
