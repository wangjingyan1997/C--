#include <stdio.h>
int main() 
{
    int score;
    char grade;
    printf("ÇëÊäÈë³É¼¨£º");
	scanf("%d",&score) ;
	if (score>=90)
	{
		grade='A';
	}
	else if(score>=80&&score<90)
	{
        grade='B';	
	}
	else if(score>=70&&score<80)
	{
        grade='C';	
	}
	else if(score>=60&&score<70)
	{
        grade='D';	
	}
	else grade='E';
	printf("Your grade:%c",grade);
	return 0;
}

