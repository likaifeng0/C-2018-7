#include <stdio.h>
void pri()
{
  printf("*******");
}
void ff(int f)
{
  for(f;f>0;f--)
   {pri();
    printf("\n");
   }
}


main() 
{
  int n;
  printf("������һ����: ");
  scanf("%d",&n); 
  ff(n);
}
