
#include<iostream>
using namespace std;
int max(int,int);
int main(){
    int a,b;
    cin>>a>>b;
    int big=max(a,b);
}
int max(int a,int b){
    if(a>b){
return(a);
    }
else
        return b;
