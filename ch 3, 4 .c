// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,b,n;
    b=1;
    a=1;
    printf("enter the number :");
    scanf("%d",&n);
    while(b<=n)
    {
        a=b*a;
        b++;
    }
    printf("%d",a);

    return 0;
}