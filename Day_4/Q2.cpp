#include<iostream>
using namespace std;
int main(){
    int n,i,a=0,b=1,sum;
    cin>>n;
    if(n==1)
        cout<<0;
    else if (n==2)
        cout<<1;
        else{


    for(i=3;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
        cout<<sum;
    }

        

    }
