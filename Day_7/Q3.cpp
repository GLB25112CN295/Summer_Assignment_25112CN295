#include<iostream>
using namespace std;
int sum(int);
int main(){
    int n,summing;
    cin>>n;
    summing=sum(n);
    cout<<summing;
}
int sum(int n ){
    if(n==0)
    return 0;
    return(n%10)+sum(n/10);
}
