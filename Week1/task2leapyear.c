//Logical Operators: Write a C program to check if a given year is a leap year using logical operators (&&, ||)
#include<stdio.h>
int main(){
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0 || year%400==0){
        printf("It is a leap year");}
    else{
        printf("It is not a leap year");
    }
    return 0;
    
}