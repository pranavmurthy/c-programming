// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,result;
    printf("please enter the four digit number");
    scanf("%d",&a);
    result=a%10;
    a=a/10;
    result =result*10+a%10;
    a=a/10;
    result=result*10+a%10;
    a=a/10;
    result=result *10+a%10;
    printf("%d",result);
    
    return 0;
}