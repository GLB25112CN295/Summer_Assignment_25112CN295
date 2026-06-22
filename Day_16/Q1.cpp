#include<iostream>
using namespace std;
int missingnumber(int arr[],int n){
    int XOR1=0;
    int XOR2=0;
    int ans;
    for(int i=1;i<n;i++){
        XOR1=XOR1^i;
    }
    for(int i=1;i<n;i++){
        XOR2=XOR2^arr[i];
         ans=XOR1^XOR2;
    }
    return(ans);

}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int miss=missingnumber(arr,n);
    cout<<miss;


}
