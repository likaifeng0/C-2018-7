#include <stdio.h> 
main() 
{
	int x,y,n;
	printf("请输入杨辉三角的n(n>=2)行: "); 
	scanf("%d",&n);
	printf("\n"); 
		
	int number[n][n];
	for(y=0;y<=n;y++)
	 {
	   for(x=0;x<=n;x++)
	   number[y][x]=1;
	 }
	
	for(y=2;y<=n;y++)
	 {
	   for(x=0;x<=y;x++)
	    {
	      if(x==0||x==y) number[y][x]=1;
	      else 
		  number[y][x]=number[y-1][x-1]+number[y-1][x];
		}
	 }
	printf("1 \n"); 
	printf("1   1   \n");
	for(y=2;y<=n;y++)
	 {
	   for(x=0;x<=y;x++)
	    {
	      if(number[y][x]<10)
	      printf("%d   ",number[y][x]);
	      else if(number[y][x]<100)
	      printf("%d  ",number[y][x]);
	      else if(number[y][x]<1000)
	      printf("%d ",number[y][x]);
		}
	   printf("\n");
	 }	
}
