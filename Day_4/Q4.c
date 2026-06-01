#include<stdio.h>
int main(){
    int n1,temp,sum,d,n2,i;
    printf("enter the range for armstrong");
    scanf("%d %d",&n1,&n2);
    for(i=n1;i<=n2;i++){
        temp=i;
        sum=0;
        while(temp>0){
            d=temp%10;
            sum=sum+d*d*d;
            temp=temp/10;
        }
        if(sum==i){
            printf(" %d armstrong",i);
        }

    }
}
