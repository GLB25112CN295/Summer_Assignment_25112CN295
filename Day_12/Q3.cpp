#include<iostream>
using namespace std;
int fabo(int n){
    int a =0;
    int b=1;
    cout<<a<<b;
    for(int i=1;i<n-1;i++){
        int sum =a+b;
        cout<<sum << " ";
        a=b;
        b=sum;
    }
    return b;

}
int main(){
    int n;
    cin>>n;
    fabo(n);

}
