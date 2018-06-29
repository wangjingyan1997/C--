#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int length(char *p);
int len;
char str[20];
printf("input string:  ");
scanf("%s",str);
len=length(str);
printf("The length of string is %d.\n",len);

	return 0;
}
int length(char *p)          
{int n;
 n=0;
 while (*p!='\0')
  {n++;
   p++;
  }
 return(n);
}

