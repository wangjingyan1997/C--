#include <stdio.h>
int main() 
{
  int I,rank;
  double reward,rew1,rew2,rew4,rew6,rew10;
  rew1=100000*0.1;
  rew2=rew1+100000*0.075;
  rew4=rew2+100000*0.05;
  rew6=rew4+100000*0.03;
  rew10=rew6+100000*0.015;
  printf("请输入您的利润：");
  scanf("%d",&I); 
  rank=I/100000;
  if(I>1000000)
  rank=10;
  switch(rank)
  {
  case 0:reward=I*0.1;break;
  case 1:reward=rew1+(I-100000)*0.075;break;
  case 2:
  case 3:reward=rew2+(I-200000)*0.05;break;
  case 4:
  case 5:reward=rew4+(I-400000)*0.03;break;
  case 6:
  case 7:
  case 8:
  case 9:reward=rew6+(I-600000)*0.015;break;
  case 10:reward=rew10+(I-1000000)*0.01;break;
  }
  printf("应发放的奖金总数为：%10.2f",reward);
	return 0;
}

