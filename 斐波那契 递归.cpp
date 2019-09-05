#include <stdio.h> 
int fib(int f)
{
  if(f==1||f==2)return 1; 
 return fib(f-1)+fib(f-2);
}

int main() 
{   
    int a=3,n;
    printf("please enter n: ");
    scanf("%d",&n);
    printf("前%d项斐波那契数列是: \n",n);
    if(n==1)
      printf("1 ");
    else if(n==2)
      printf("1 1 ");
      
    else
    {
	 printf("1 1 ");
	  for(a;a<=n;a++)
      printf("%d ",fib(a));
    }
}
