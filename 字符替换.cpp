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
  printf("�������ַ���: ");
  gets(str);
  puts("����Ҫ�滻�ַ����ַ�");
  scanf("%c %c",&ch,&sh);
  change(str,ch,sh);
  
  printf("�滻����: "); 
  puts(str);
}
