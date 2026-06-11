#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=i){
            char ch='A'+j-1;
            cout<<ch;
            j++;

        }
        int start=i-1;
        j=i-1;
        while(start){
            char p='A'+j-1;
            cout<<p;
            j--;
            start--;
        }
        cout<<endl;
        i++;
    }
}
