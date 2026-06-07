#include<iostream>
using namespace std;
int reverse(int);
int main(){
    int n,rev =0;
    cin>>n;
    rev=reverse(n);
    cout<<rev;
}
int reverse(int n){
    if(n==0)
    rev = rev*10+(n%10);
    return reverse(n/10);


}
