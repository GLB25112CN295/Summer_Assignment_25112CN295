#include<stdio.h>
int main(){
    int a,b,temp,x,y;
    printf("enter the number");
    scanf("%d %d",&a,&b);
    x=a;
    y=b;
    while(y!=0){
        temp=y;
        y=x%y;
        x=temp;
    }
    printf("lcm =%d",(a*b)/x);
    return 0;
}
