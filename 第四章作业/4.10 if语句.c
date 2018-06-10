#include <stdio.h>
int main() 
{
  int I;
  double reward,rew1,rew2,rew4,rew6,rew10;
  rew1=100000*0.1;
  rew2=rew1+100000*0.075;
  rew4=rew2+100000*0.05;
  rew6=rew4+100000*0.03;
  rew10=rew6+100000*0.015;
  printf("请输入您的利润：");
  scanf("%d",&I); 
  if(I<=100000)
  reward=I*0.1;
  else if(I<=200000)
  reward=rew1+(I-100000)*0.075;
  else if(I<=400000)
  reward=rew2+(I-200000)*0.05;
  else if(I<=600000)
  reward=rew4+(I-400000)*0.03;
  else if(I<=1000000)
  reward=rew6+(I-600000)*0.015;
  else reward=rew10+(I-1000000)*0.01;
  printf("应发放的奖金总数为：%10.2f",reward);
	return 0;
}

