// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,result;
    printf("please enter the  digit ");
    scanf("%d",&a);
    result=a%10+1;
    a=a/10;
    result =result*10+a%10+1;
    a=a/10;
    result=result*10+a%10+1;
    a=a/10;
    result=result*10+a%10+1;
    printf("%d",result);
    
    return 0;
}