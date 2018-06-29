int main()
{
  int a[5][5],i,j,sum1,sum2;
  sum1=0;
  sum2=0;
  for(i=0;i<5;i++)
    for(j=0;j<5;j++)
     { scanf("%d",&a[i][j]);
       if(i==j) sum1+=a[i][j];
     if(i+j==4) sum2+=a[i][j];
     }
  printf("%d,%d",sum1,sum2);
  return 0;
}

