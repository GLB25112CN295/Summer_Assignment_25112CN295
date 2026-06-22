#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> pairsum(int arr[],int n){
    int target;
    cout<<"enter the target"<<endl;
    cin>>target;
    vector<vector<int>>ans;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           if(arr[i]+arr[j]==target){
            vector<int>temp;
            temp.push_back(min(arr[i],(arr[j]));
            temp.push_back(max(arr[i],(arr[j]));
            ans.push_back(temp);

           }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;

}
int main(){
int n;
cin>>n;
int arr[100];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

pairsum(arr,n);

}
