#include <stdio.h>
int main()
{
    int n,temp,sum;
    for(n=1;n<1000;n++) 
    {
        sum= 0;
        for(temp=1;temp<n;temp++)
        {
            if(n%temp==0) 
            {
                sum=sum+temp;
            }8
        }
        if(sum==n)
        {
            printf("%d its factors are ",n);
            for(temp=1;temp<n;++temp)
            {
                if(n%temp==0)
                {
                    printf("%d ",temp);
                }
            }
            printf("\n");
        }
         
    }
    return 0;
}
