#include <stdio.h> 
struct student
{
	char name[20];
	char sex;
	int age;
};

struct student stu[3]={"li",'n',18,"liw",'v',20,"lie",'v',23};

main() 
{struct student *p;
p=stu;
   printf("%s %c %d",p->name,p->sex,p->age);
}
