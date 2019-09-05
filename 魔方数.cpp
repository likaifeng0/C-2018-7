#include <stdio.h>
int check(int n)
{
  if(n%2==0)
  {
    while(1)
     {
     	printf("你输入地数不是奇数,再次输入: ");
    	scanf("%d",&n); 
    	if(n%2==1) break;
     } 
    return n;
  }
  return n; 
} 
 
main() 
{
  int n;
  printf("请输入奇数n: ");
  scanf("%d",&n);
  
  n=check(n);   //check n is ji number
  
  int num[n][n];
  for(int y=0;y<n;y++)    //starting
  {
  	for(int x=0;x<n;x++)
  	  num[y][x]=1;
  } 
  int y=0,x=n/2;
  
  for(int a=2;a<=n*n;a++)      //count
  {
  	if(num[(y+n-1)%n][(x+1)%n]==1&&((y+n-1)%n!=0||(x+1)%n!=n/2))  //判断右上是否为1,切不是起点 
  	 {
  	   y=(y+n-1)%n;
  	   x=(x+1)%n;
  	   num[y][x]=a;
	 }
	else while(1) 
	 {
	   if(num[(y+1)%n][x]==1&&((y+1)%n!=0||x!=n/2))              //判断下面是否为1,切不是起点 
	    {
	      y=(y+1)%n;
	      num[y][x]=a;
	      break;
		}
	 }
  }
  
	 printf("魔方里的数是:\n");                           //output 
	 for(y=0;y<n;y++)
	  {
	  	for(x=0;x<n;x++)
	  	 {
	  	   if(num[y][x]<10) printf("%d   ",num[y][x]);
	  	   else if(num[y][x]<100) printf("%d  ",num[y][x]);
	  	   else if(num[y][x]<1000) printf("%d ",num[y][x]);
		 }
		printf("\n");
	  }
  
}
