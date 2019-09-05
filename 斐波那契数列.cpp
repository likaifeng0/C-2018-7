#include <stdio.h> 
int main(int argc, char** argv) 
{   
    int a=1,b=1,cap,n;
    printf("please enter n: ");
    scanf("%d",&n);
    printf("前%d项斐波那契数列是: \n",n);
    if(n==1)
      printf("1 ");
    else if(n==2)
      printf("1 1 ");
    else
    printf("1 1 ");
     {
      for(int j=1;j<=n-2;j++)
       {
       	cap=a+b;
       	a=b;
       	b=cap;
       	printf("%d ",b); 
	   }
	 }
	return 0;
}
