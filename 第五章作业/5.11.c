#include <stdio.h>
int main()
{
	int M,N;
	scanf("%d %d",&M,&N);
	double s=M,h=s/2.0;
	float n;
	for(n=2.0;n<=N;n++)
	{
		s=s+2.0*h;
		h=h/2.0;
	}
	printf("%3.2f %3.2f\n",h,s);
	return 0;
}
