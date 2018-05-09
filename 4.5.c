#include <stdio.h>
#include <math.h>
int main() 
{
	float a;
	int b;
	printf("请输入一个小于1000的数字："); 
	scanf("%f",&a);
	while(a >=1000)
	   {
        printf("请重新输入");
		scanf("%f",&a); 
	   }
	b=sqrt(a);
	printf("%d\n",b);
	return 0;
}

