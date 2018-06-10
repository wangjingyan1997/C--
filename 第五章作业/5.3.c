#include <stdio.h>
#include <conio.h> 
int main()
{
	int a,b,m,n,temp;
	printf("请输入两个正整数：");
	scanf("%d %d",&m,&n);
	if(m<n)
	{
		temp=m;
		m=n;
		n=temp;
	 } 
	 a=m;
	 b=n;
	 while(b!=0)
	 {
	 	temp=a%b;
	 	a=b;
	 	b=temp;
	 }
	 printf("%d %d\n",a,m*n/a);
	 return 0;
}
