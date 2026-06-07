#include<iostream>
using namespace std;
int factorial(int);
int main(){
    int n,fact;
    cin>>n;
    fact=factorial(n);
    cout<<fact;
}
int factorial(int n){
    if(n==0)
        return(1);
        else
        return(n*factorial(n-1));
    }
