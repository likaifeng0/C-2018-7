#include <stdio.h>

int main(int argc, char** argv) 
{
	int a,b;
	printf("please enter the first number: ");
	scanf("%d",&a);
	printf("\nplease enter the second number: ");
	scanf("%d",&b);
	if(a>b)
	 {
	  while(a%b!=0)
	   {
	   	b=a%b;
	   	a=b;
	   }
	  printf("\nthe greatest common divisor is %d",b);
	 }
	 
	else if(a<b)
	 {
	  while(a%b!=0)
	   {
	   	a=b%a;
	   	b=a;
	   }
	   printf("\nthe greatest common divisor is %d",a);
	 }
	else 
	printf("\nthe greatest common divisor is %d",a);
	return 0;
}
