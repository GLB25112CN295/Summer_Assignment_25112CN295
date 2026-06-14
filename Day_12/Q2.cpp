#include<iostream>
using namespace std;
int armstrong(int n){
    int d,sum=0,temp;
    temp=n;
    while(n!=0){
        d=n%10;
        sum=sum+d*d*d;
        n=n/10;
    }
    if(sum==temp){
        return 1;
    }
    else 
    return 0;
}
    int main(){
        int n;
        cin>>n;
        if(armstrong(n)){
            cout<<"number is armstrong" <<endl;
        }
        else
        cout<<"number is not armstrong" <<endl;
    }

