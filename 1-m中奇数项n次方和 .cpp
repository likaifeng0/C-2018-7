#include <stdio.h> 
int pow(int m,int n)
{
  int a=0,value=1;
  for(a;a<n;a++)
   {
   	 value*=m;
   }
   return value;
}

int po(int m,int n)
{
  return pow(m,n);
}

int sum(int m,int n)
{
  int x=1,s=0;
  for(x;x<=m;x+=2)
   {
   	s+=po(x,n);
   }
  return s;
}

main() 
{
  int m,n;
  printf("������m��n; ");
  scanf("%d%d",&m,&n);
  printf("1-m��������n�η���: %d",sum(m,n));  
}
