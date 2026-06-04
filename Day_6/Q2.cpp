#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n , i = 0;
    cin>>n;
    int r ,ans = 0;
    while(n!=0){
        r=n%2;
        ans=ans+r*round(pow(10,i));
        n=n/2;
        i++;


    }
    cout<<ans;

}
