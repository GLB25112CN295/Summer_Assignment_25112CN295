#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int duplicate;
    cout<<"enter the no to find duplicate"<<endl;
    cin>>duplicate;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==duplicate ){
            count++;
        }
    }
    if(count>=2){
        cout<<"it is duplicate element"<<endl;
    }
}
