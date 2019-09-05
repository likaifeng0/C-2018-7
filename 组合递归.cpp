#include <stdio.h>
main() 
{
  float com(int m,int n);
  int fac(int m);
  int m,n;
  printf("请输入m和n: ") ;
  scanf("%d%d",&m,&n);
  printf("\n结果是%f",com(m,n));
}
int fac(int m)
{ 
 
 if(m==1) return 1;
 else return m*fac(m-1);
}

float com(int m,int n)
{
  float c;
  c=(float)fac(m)/(fac(n)+fac(m-n));
  return c;
}
