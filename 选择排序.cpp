#include<stdio.h>  
#define N 4  
void xuanze(int a[])  
{  
    int i,j,min,t;  
    for(i=0;i<N-1;i++)//j=i+1สนตรi<N-1  
    {  
        min=i;  
        for(j=i+1;j<N;j++)  
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
void print(int a[])    
{    
    for(int i=0;i<N;i++)    
    {    
        printf("%d ",a[i]);    
    }    
}    
int main()  
{  
    int a[4]={1,5,2,4};  
    xuanze(a);     
    print(a);   
    return 0;  
}  
