#include <stdio.h>
int main()
{
	int i;
	for(i=100;i<=999;i++)
	{
		int k,l,s,a;
		k=i%10;
		l=i/100;
		s=(i-l*100-k)/10;
		a=k*k*k+l*l*l+s*s*s;
		if(a==i)
		printf("%d\n",i); 
	}
	return 0;
}
