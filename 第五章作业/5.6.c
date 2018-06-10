#include <stdio.h>
int main()
{
	int i,n,sum,k=1;
	scanf("%d",&n);
	sum=0;
	for(i=1;i<=n;i++)
	{
		k=k*i;
		sum=sum+k;
	}
	printf("%d\n",sum);
	return 0;
}

