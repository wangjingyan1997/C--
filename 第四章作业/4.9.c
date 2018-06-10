#include <stdio.h>
#include <math.h>
int main() 
{
	int num,indiv,ten,hundred,thousand,ten_thousand,place;
	printf("请输入一个不多于五位的正整数：");
	scanf("%d",&num);
	while(num>99999)
	{
		printf("请重新输入：");
		scanf("%d",num); 
	 } 
	if(num>9999)
	   place=5;
	else if(num>999)
	   place=4;
	else if(num>99)
	   place=3;
	else if(num>9)
	   place=2;
	else place=1;
	printf("数字位数为：%d\n",place);
	ten_thousand=num/10000;
	thousand=(num-ten_thousand*10000)/1000;
	hundred=(num-ten_thousand*10000-thousand*1000)/100;
	ten=(num-ten_thousand*10000-thousand*1000-hundred*100)/10;
	indiv=(num-ten_thousand*10000-thousand*1000-hundred*100-ten*10)/1;
	switch(place)
	{
    case 5:printf("每位数字为:%d%d%d%d%d\n",ten_thousand,thousand,hundred,ten,indiv);
           printf("逆序数字为:%d%d%d%d%d\n",indiv,ten,hundred,thousand,ten_thousand);
           break;
    case 4:printf("每位数字为:%d%d%d%d\n",thousand,hundred,ten,indiv);
           printf("逆序数字为:%d%d%d%d\n",indiv,ten,hundred,thousand);
           break;
    case 3:printf("每位数字为:%d%d%d\n",hundred,ten,indiv);
           printf("逆序数字为:%d%d%d\n",indiv,ten,hundred);
           break;
    case 2:printf("每位数字为:%d%d\n",ten,indiv);
           printf("逆序数字为:%d%d\n",indiv,ten);
           break;
    case 1:printf("每位数字为:%d\n",indiv);
           printf("逆序数字为:%d\n",indiv);
           break;
	}
	
	return 0;
}


