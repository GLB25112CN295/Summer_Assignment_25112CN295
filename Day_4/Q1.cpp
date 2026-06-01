#include<iostream>
using namespace std;
int main(){
    int a,b,n,sum;
    cout<<"enter the number"<<endl;
    cin>>n;
    a=0;
    b=1;
    cout<<a<<" "<<b<<" ";
    int i=3;
    while(i<=n){
        sum=a+b;
        cout<<sum<<endl;
        a=b;
        b=sum;
        i=i+1;


    }

}
