#include<iostream>
using namespace std;
int main(){
    int n,temp,flag=0,i;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(i=2;i<=n;i++){
        while(n%i==0){
            cout<<i<<"";
            n=n/i;

        }

    }


}
