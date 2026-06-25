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
    for(int i=0;i<n;i++){
        arr3[i]=arr1[i];
        
    }
    for(int j=0;j<m;j++){
        arr3[j+n]=arr2[j];
    }
    for(int k=0;k<m+n;k++){
        cout<<arr3[k]<<" ";
    }
}
