#include <stdio.h> 

int main(int argc, char** argv) 
{
	int num,n,x,y,j;
	printf("please enter a number: ");
	scanf("%d",&num);
	printf("\n");
	n=2*num-1;
	j=num;
	for (y=1;y<=num;y++)
	{
	  j--;
	  for(x=1;x<=n;x++)
	   {
	    if(x>=num-j&&x<=num+j)
	      printf("*");
	    else
	     printf(" ");
	   }
	  printf("\n");
    }
	return 0;
}
