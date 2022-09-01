// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,n,x;
    x=1;
    printf("enter the number : ");
    scanf("%d",&n);
    a=n;
    while(a>=1)
    {
        x=1;
        while(x<=a)
        {
            printf(" %d \t",1);
            x++;
        }
        printf("\n");
        a--;
    }
    

    return 0;
}