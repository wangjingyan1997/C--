    #include <stdio.h>
    #include <math.h>
    double solut(double a,double b,double c,double d)
    {
        double x1=1,x,f,f1;
        do
        {   x=x1;
            f=((a*x+b)*x+c)*x+d;
            f1=(3*a*x+2*b)*x+c;
               x1=x-f/f1;        
        } while(fabs(x1-x)>=0.00000001);
        return x1;
    }

    int main()
    {
        double solut(double ,double ,double ,double );
        double a,b,c,d;
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
        printf("%.2f\n",solut(a,b,c,d));
        return 0;
    }
