#include <stdio.h>
int main()
{
	int n;
	int sum=0;
	int ssum=0;
	int i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=0;
		for(j=1;j<=i;j++)
		{
			sum=sum*10+2;
		}
		ssum+=sum;
	}
	printf("%d",ssum);
	return 0;
}
