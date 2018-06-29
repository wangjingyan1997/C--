#include<stdio.h>
int main()
{
    int i,j,a[3][3],s1=0,s2=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf(" %d",&a[i][j]);
                if(i==j)
                    s1=s1+a[i][j];
                if(i+j==2)
                    s2=s2+a[i][j];
        }
    }
            printf("%d %d\n",s1,s2);
            return 0;
}

