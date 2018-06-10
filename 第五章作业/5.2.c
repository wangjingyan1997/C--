# include <stdio.h>
# include <math.h>
int main()
{
    int sign=1;
    double pi=0.0,term;
    int n=0;
    
    while(fabs(term)>=1e-8)
    {
        ++n;
        term = 1.0/(2*n-1)*sign;
        pi += term;
        sign = -sign;
    }
    pi *= 4;
    printf("pi�Ľ���ֵ��%lf\n",pi);
    printf("ѭ����ѭ����%d��\n",n);
    return 0;
}
/*
������Ϊ��
������������������������
fabs(term)>=1e-6
pi�Ľ���ֵ��3.141595
ѭ����ѭ����500001��
Press any key to continue
-------------------------
fabs(term)>=1e-8
pi�Ľ���ֵ��3.141593
ѭ����ѭ����50000001��
Press any key to continue
������������������������
*/
