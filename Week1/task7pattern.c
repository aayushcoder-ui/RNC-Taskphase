#include<stdio.h>
int main(){
    int i,j,n,space;
    printf("Enter the no. of rows:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(space=1;space<=n-i;space++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}