#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr1[100];
    for(int i=0;i<n;i++){
        cin>>arr1[i];

    }
    int m;
    cin>>m;
    int arr2[100];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int arr3[100];
    int i;
    for(i=0;i<n;i++){
        arr3[i]=arr1[i];
    }
    int flag=0;
    int j;
    int size=n;
    int k;
    for( j=0 ;j<m;j++){
        for(k=0;k<size;k++ ){
        if(arr3[k]==arr2[j]){
            flag=1;
            break;
        }
    
    }
    if(flag==0){
        arr3[size]=arr2[j];
        size++;
    }
        
        
    }
    for(int k=0;k<size;k++){
        cout<<arr3[k]<<" ";
    }
}
