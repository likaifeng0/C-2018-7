#include <stdio.h> 
int main(int argc, char** argv) 
{
	int n=1;
	for(n;n<=999;n++)
	 {
	  if(n%3==0)
	   {
	   	if(n%10==5||n/10%10==5||n/100%10==5)
	   	printf("%d ",n);
	   }
	 }
	return 0;
}
