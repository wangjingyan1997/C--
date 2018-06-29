#include<stdio.h>  
#define MAX 15  
int main() {  
    int n;  
    int m = 1;  
    int i, j;  
    int a[MAX][MAX];  
    scanf("%d", &n);  
  
    i = 0;  
    j = (n + 1) / 2 - 1;   
    while (m <= n * n) {  
        a[i][j] = m;  
        m++;  
        i--;  
        j++;  
        if ((m - 1) % n == 0 && m > 1) {  
            i = i + 2;   
            j = j - 1;  
        }  
  
        if (i < 0)   
            i = i + n;         
        if (j > (n - 1))    
            j = j - n;       
    }  
  
    for (i = 0; i < n; i++) {  
        for (j = 0; j < n; j++)  
            printf("%d\t", a[i][j]);  
        printf("\n");  
    }  
    return 0;  
}  
