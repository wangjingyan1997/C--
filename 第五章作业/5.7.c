#include <stdio.h>
int main()
{
    int a,b,c;
	int i,j,k;
	int s1=0,s2=0;
	float s3=0,sum=0;
	scanf("%d %d %d",&a,&b,&c);
	for(i=1;i<=a;i++)
	{
		s1=s1+j;
	}
	for(j=1;j<=b;j++)
	{
		s2=s2+j*j;
	}
	for(k=1;k<=c;k++)
	{
		s3=s3+1.000000/k;
	}
	sum=s1+s2+s3;
	printf("%.2f\n",sum);
	return 0;
}
