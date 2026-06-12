#include<iostream>
using namespace std;
int fact(int);
int main(){
    int n;
    cin>>n;
    int factorial=fact(n);
    cout<<factorial;
}
int fact(int n){
    int factorial=1;
for(int i=1;i<=n;i++){
    factorial=factorial*i;
}
    return(factorial);

}
