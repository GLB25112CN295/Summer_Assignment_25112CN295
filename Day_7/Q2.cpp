#include<iostream>
using namespace std;
int fabo(int);
int main(){
    int n,i;
    cin>>n;
    for(i=0;i<=n-1;i++){
        cout<<(fabo(i));
    
    }
    int fabo(int i){
        if(i==0)
        return 0;
        if(i==1)
        return 1;
        return((fabo(i-1)+fabo(i-2)));

    }
}
