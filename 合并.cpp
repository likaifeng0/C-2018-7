#include <stdio.h>
int merge(int x[],int y[],int m,int n)
{ 
  for(int a=0;a<n;a++)
      x[m+a]=y[a];
      
   int u,a,w,len=m+n;   
  for(a=0;a<len;a++)
    for(u=a+1;u<len;u++)
	  if(x[a]==x[u])
	    { w=u;
	      for(w;w<len-1;w++)
	        x[w]=x[w+1];
		  len--; 
		} 
 return len;
}

int sort(int a[],int len)
{
  int i,j,min,t;  
    for(i=0;i<len-1;i++)
    {  
        min=i;  
        for(j=i+1;j<len;j++)  
        {  
            if(a[min]>a[j])  
            {  
                min=j;  
            }  
        }  
        if(min!=i)  
        {  
            t=a[min];  
            a[min]=a[i];  
            a[i]=t;  
        }  
    }  
}
main() 
{
  int x[100],y[100], m,n,len;
  printf("请输入m和n: ");
  scanf("%d %d",&m,&n);
  printf("请输入第一个数组");
  for(int a=0;a<m;a++)
    scanf("%d",&x[a]); 
  printf("请输入第二个数组"); 
  for(int a=0;a<n;a++)
    scanf("%d",&y[a]); 
  len= merge(x,y,m,n);
  sort(x,len);
  printf("合并后是: "); 
  for(int a=0;a<len;a++)
    printf("%d ",x[a]);
}
