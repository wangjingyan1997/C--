#include <stdio.h>  
int main()  
{  
    int n,a[100],i;  
    while(scanf("%d",&n)!=EOF)
   {  
        for(i=0;i<n;i++)
		{  
            scanf("%d",a+i);  
        }  
        for(i=n-1;i>=0;i--)  
            printf("%d ",a[i]);  
        printf("\n");  
    }  
    return 0;  
} 
