#include <stdio.h> 
int sum(int num[6][8])
{   
    int su=0;
	int x,y;
	for(y=0;y<6;y++)
	  for(x=0;x<8;x++)
	    if(num[y][x]!=0) 
		  su+=num[y][x];
	return su;
}
main() 
{
  int num[6][8]={2,0,0,4,3,3,0,0,
                 0,0,0,1,0,0,0,0,
			     0,0,0,0,0,0,0,0,
			     6,0,0,0,0,0,0,0,
			     0,7,0,0,9,0,6,0,
			     0,0,0,0,0,0,0,0};
 int su;
 su=sum(num);
 printf("ºÍÊÇ%d",su);
}
