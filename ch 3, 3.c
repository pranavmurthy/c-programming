// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,b,n;
    b=1;
    printf("enter the number :");
    scanf("%d",&n);
    while(b<n)
    {
        a=b%2;
        if(a!=0)
        {
            printf("%d\t",b);
        }
        b++;
        
    }

    return 0;
}