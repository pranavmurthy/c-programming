// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int b,n;
    b=0;
    printf("enter the number :");
    scanf("%d",&n);
    while(b<n)
    {
        b=b+1;
        printf("%d\t",b);
    }

    return 0;
}