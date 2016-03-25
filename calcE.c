#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    int n = atoi(argv[1]);
    int m = n;
    int a[m];

    int i, j, carry, temp;
    
    printf("%d.", 2);
    for (j = m; j >= 2; j--) {
        a[j] = 1;
    }

    for (i = 1; i <= n; i++) {
        carry = 0;
        for (j = m; j >= 2; j--) {
            temp = a[j] * 10 + carry; 
            carry = temp / j;
            a[j] = temp - carry * j;
        }
        printf("%d", carry);
    }
    
    return 0;
}
