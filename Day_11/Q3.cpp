#include<iostream>
using namespace std;
int prime(int);
int main(){
    int n;
    cin>>n;
    int primmer;
    primmer=prime(n);
    cout<<primmer;
}
int prime(int n){
    int i;
    for(i=2;i<=n-1;i++){
        if(n%i==0){
            return 0;//not prime
        }
        else
        return 1;//prime
    }

}
