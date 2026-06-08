#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=0;
        while(j<=i){
            char ch ='A'+j;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}
