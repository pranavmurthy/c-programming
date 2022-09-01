// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int prev1,a,prev2,n;
    prev2=1;
    prev1=1;
    printf("enter the number :");
    scanf("%d",&n);
    printf("\t%d %d\t",prev1,prev2);
    while(prev1<=n)
    {
        a=prev1+prev2;
        printf("%d\t",a);
        prev2=prev1;
        prev1=a;
        
    }

    return 0;
}