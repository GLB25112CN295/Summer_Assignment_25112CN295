#include<iostream>
using namespace std;
int palindrome(int n){
    int temp,d,rev=0;
    temp=n;
    while(n!=0){
    d=n%10;
    rev= rev*10+d;
    n=n/10;
    }
    if(temp==rev){
        return 1;
    }
    else 
    return 0;
}

int main(){
    int n;
    cin>>n;
    if(palindrome(n)){
    cout<<"the number is palindrome" << endl;
    } 
    else
    cout<<"number is not palindrome" <<endl;


}
