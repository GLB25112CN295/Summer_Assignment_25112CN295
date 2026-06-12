#include<iostream>
using namespace std;
int sum(int,int);
int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    int summing;
    summing=sum(a,b);
    cout<<summing;
}
int sum(int a,int b){
    int z;
    z=a+b;
    return(z);
}
