#include <stdio.h>
#include <math.h>
int main() 
{
	float a;
	int b;
	printf("������һ��С��1000�����֣�"); 
	scanf("%f",&a);
	while(a >=1000)
	   {
        printf("����������");
		scanf("%f",&a); 
	   }
	b=sqrt(a);
	printf("%d\n",b);
	return 0;
}

