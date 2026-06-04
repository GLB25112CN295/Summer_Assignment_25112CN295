#include<iostream>
using namespace std;
int main(){
    int n,x,i,power=1;
    cin>>x;
    cin>>n;
    for(i=1;i<=n;i++){
        power=power*x;
    }
    cout<<power;
}
