#include <stdio.h>
#include <math.h>
int main() 
{
	int num,indiv,ten,hundred,thousand,ten_thousand,place;
	printf("������һ����������λ����������");
	scanf("%d",&num);
	while(num>99999)
	{
		printf("���������룺");
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
	printf("����λ��Ϊ��%d\n",place);
	ten_thousand=num/10000;
	thousand=(num-ten_thousand*10000)/1000;
	hundred=(num-ten_thousand*10000-thousand*1000)/100;
	ten=(num-ten_thousand*10000-thousand*1000-hundred*100)/10;
	indiv=(num-ten_thousand*10000-thousand*1000-hundred*100-ten*10)/1;
	switch(place)
	{
    case 5:printf("ÿλ����Ϊ:%d%d%d%d%d\n",ten_thousand,thousand,hundred,ten,indiv);
           printf("��������Ϊ:%d%d%d%d%d\n",indiv,ten,hundred,thousand,ten_thousand);
           break;
    case 4:printf("ÿλ����Ϊ:%d%d%d%d\n",thousand,hundred,ten,indiv);
           printf("��������Ϊ:%d%d%d%d\n",indiv,ten,hundred,thousand);
           break;
    case 3:printf("ÿλ����Ϊ:%d%d%d\n",hundred,ten,indiv);
           printf("��������Ϊ:%d%d%d\n",indiv,ten,hundred);
           break;
    case 2:printf("ÿλ����Ϊ:%d%d\n",ten,indiv);
           printf("��������Ϊ:%d%d\n",indiv,ten);
           break;
    case 1:printf("ÿλ����Ϊ:%d\n",indiv);
           printf("��������Ϊ:%d\n",indiv);
           break;
	}
	
	return 0;
}


