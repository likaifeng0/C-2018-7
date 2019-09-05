#include<stdio.h>
#define size 100
main()
{
  char c;
  int n;
  FILE *pf;
  if((pf=fopen("data.txt","a+"))==NULL)
   {
   	printf("cannot open file");
   }
  
  char ch[5]={"qwer"};
  for(n=0;n<size;n++)
    fputs(ch,pf);
  
}
