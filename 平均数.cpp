#include <stdio.h>

int main(int argc, char** argv) 
{
	int num,n,number,j=0;
	double sum=0.0;
	printf("num= ");
	scanf("%d",&num);
	printf("please enter a number than prass enter\n");
	for(n=0;n<num;n++)
	 {
	  scanf("%d",&number);
	  if(number%2==0)
	   {
		sum+=number;
		j++;
       }
	 }
	printf("the average is %f",sum/j);
	return 0;
}
