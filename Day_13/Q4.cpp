int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max;
     max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"the maximum number is "<<max<<endl;
    int min;
    min=INT_MAX;
    for(int i =0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"the minimum of the number is "<< min <<endl;


}
