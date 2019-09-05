#include <stdio.h>
#include<string.h>
char change(char str[],char ch,char sh) 
{
  int n,len;
  len=strlen(str);
  for(n=0;n<len;n++)
    if(str[n]==ch) str[n]=sh;
}
main() 
{
  char str[100],ch,sh;
  printf("ÇëÊäÈë×Ö·û´®: ");
  gets(str);
  puts("ÊäÈëÒªÌæ»»×Ö·ûºÍ×Ö·û");
  scanf("%c %c",&ch,&sh);
  change(str,ch,sh);
  
  printf("Ìæ»»ºóÊÇ: "); 
  puts(str);
}
