#include<stdio.h>  
#include<string.h>  
int main() {  
    char a[20]="Hello", b[20]=" world!";  
    int i;  
    for (i = strlen(a)+1; i < 20; i++)  
        a[i]= b[i-strlen(a)];  
    for (i = 0; i < 20; i++)  
        printf("%c", a[i]);  
    return 0;  
}  
