#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    int odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count++;

        }
        else
            odd++;
    }
    cout<<"no of even number are"<< count <<endl;
    cout<<"no of odd number are"<< odd <<endl;
    
}
