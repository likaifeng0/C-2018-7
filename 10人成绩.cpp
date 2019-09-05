#include <stdio.h> 
int del(int mark[])
{
  int y,x,number=10;
  for(y=0;y<number;y++)
    {
	 if(mark[y]<60)
      { 
      	for(x=y;x<9;x++)
      	  mark[x]=mark[x+1];
      	number--;
      	y--;
	  }
    }
  return number;
}


int sort(int a[],int number)
{
  int j,i,t;
  for(j=0;j<number;j++)
   for(i=j+1;i<number;i++)
     if (a[j]<a[i])
      { 
	    t=a[j];a[j]=a[i];a[i]=t;
      }
}


int pri(int mark[],int number)
{
  int n=0;
  for(n;n<number;n++)
    printf("%d ",mark[n]);
}


main() 
{
  int n,mark[10],number;
  printf("ÇëÊäÈë10ÈË³É¼¨: ");
  for(n=0;n<10;n++)
    scanf("%d",&mark[n]);
    
  number=del(mark);
  sort(mark,number);
  pri(mark,number);
}
