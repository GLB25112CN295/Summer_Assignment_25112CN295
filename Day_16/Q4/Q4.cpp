#include<iostream>
using namespace std;
int removeduplicate(int arr[],int n){
    int i =0;
    
        for(int j=1;j<n;j++){
            if(arr[i]!=arr[j]){
                i++;
                arr[i]=arr[j];
            }
        }
        return i+1;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int newsize=removeduplicate(arr,n);
    for(int i=0;i<newsize;i++){
        cout<<arr[i]<<" ";
    }
    return 0;


}
