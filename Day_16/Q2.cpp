#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxfreq=0;
    int ans;
    
    for(int i=0;i<n;i++){
        int flag=0;
        for(int j=i-1;j>=0;j--){
            if(arr[i]==arr[j]){
                flag=1;
                break;
            }
        }
        if(flag==1)
        continue;
        int freq=0;

        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                freq++;
                if(freq>maxfreq){
                    maxfreq=freq;
                    ans=arr[i];
                }
            }
        }

}
cout<<ans;

}
