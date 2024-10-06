#include<stdio.h>
int main(){
    int a,b,sum,diff,prod,div;
    printf("Input number 1 and number 2:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    diff=a-b;
    prod=a*b;
    div=a/b;
    printf("The sum,difference,product and quotient is %d  %d  %d  %d",sum,diff,prod,div);
}