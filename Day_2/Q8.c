#include<stdio.h>
int main(){
    int n,d,temp,rev=0;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(temp==rev){
        printf("the number is palindrome");
    }
    else
    printf("number is not palindrome ");
}
