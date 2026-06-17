#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[1000];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int secondLargest = INT_MIN;

    for(int i = 1; i < n; i++) {

        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    cout << "Second largest element is " << secondLargest;

    return 0;
}
