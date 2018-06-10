#include <stdio.h>
int main()
{
	int day,a,b;
	day=9;
	a=0;
	b=1;
	while(day>0)
	{
		a=(b+1)*2;
		b=a;
		day--;
	}
	printf("%d\n",a);
	return 0;
}
