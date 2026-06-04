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
int count=0;
while(ans!=0){
    r = ans%10;

    if(r==1){
        count++;
    }

    ans = ans/10;   
}

cout<<count;
