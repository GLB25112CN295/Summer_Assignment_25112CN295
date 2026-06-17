#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int freq;
    cout<<"enter the number to its find freq"<<endl;
    cin>>freq;
    int count=0;
    for(int i=0;i<n;i++){
        if(freq==arr[i]){
        count++;
        }
    }
    cout<<"the freq of the number is "<<count;
}
