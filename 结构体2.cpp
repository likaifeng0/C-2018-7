#include<stdio.h>
struct student
{
  char name[20];
  char sex[5];
  int age;
};
main()
{
  struct student *p;
  struct student s[2]={"lili","nv",20,"liming","nan",12};
  p=s;
  printf("%s %s %d",p->name,p->sex,p->age);
  puts("");
  printf("%s %s %d",s[1].name,s[1].sex,s[1].age); 
 } 
