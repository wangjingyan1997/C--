#include<stdio.h>  
#include<string.h>  
int main(){  
    char s1[20],s2[20];  
    gets(s1);  
    int i;  
    for(i=0;i<strlen(s1)+1;i++)  
        s2[i]=s1[i];  
    for(i=0;i<strlen(s2)+1;i++)  
    printf("%c",s2[i]);  
    return 0;  
}  
