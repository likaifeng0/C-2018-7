#include <iostream>
#include<math.h>
#include<stdio.h>
int main(int argc, char** argv) 
{
    int a,b,c,d;
    float x1,x2;
    float x;
	printf("please enter a,b,c    ");
	scanf("%d%d%d",&a,&b,&c);
	d=pow(b,2)-4*a*c;
	if(d>0)
	 {
	   x1=(-b+sqrt(d))/(2*a);
	   x2=(-b-sqrt(d))/(2*a);
	   printf("b*b-4*a*c>0,x1=%f,x2=%f",x1,x2);
	 }
	else if(d==0)
     {
	   x=(-b)/(2*a);
	   printf("b*b-4*a*c=0,x=%f",x);
	 }
	else if(d<0)
	 {  
	   printf("no answer,because of b*b-4*a*c<0");
	 }
	return 0;
}
