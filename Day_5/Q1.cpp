#include<iostream>
using namespace std;
int main(){
    int n,i,sum=1;
    cout<<"enter the number"<<endl;
    cin>>n;
    i=2;
    while(i<n){
        if(n%i==0){
        sum=sum+i;
        
        }
        i++;
    }
        if(sum==n){
            cout<<"perfect number"<<endl;
        }
        else
        cout<<"not perfect number"<<endl;
    


}
