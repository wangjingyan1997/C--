#include <stdio.h>
int main()
{
	float i,a,b,t,s=0;
	int N;
	scanf("%d",&N);
	a=2.0;
	b=1.0;
	for(i=0;i<N;i++)
	{
		s=s+a/b;
		t=a;
		a=a+b;
		b=t;
	}
	printf("%.2f\n",s);
	return 0;
}
