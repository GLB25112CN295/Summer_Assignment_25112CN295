#include<iostream>
using namespace std;
int main(){
    int n,d,sum=0,temp,i,fact;
    cout<<"enter the number"<<endl;
    cin>>n;
    temp=n;
    i=1;
    while(n>0){
        d=n%10;
        fact=1;
        for(i=1;i<=d;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;

        }
        if(sum==temp)
        cout<<"strong number"<<endl;

}
