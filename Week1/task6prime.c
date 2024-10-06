#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the lower and upper limit :");
    scanf("%d%d",&m,&n);
    for (int i=m;i<=n;i++){
        int prime = 1;
        for (int j=2;j<=i/2;j++){
            if(i%j==0){
                prime = 0;
                break;
            }
        }
        if(prime==1)
        printf("%d\t",i);

    }
}