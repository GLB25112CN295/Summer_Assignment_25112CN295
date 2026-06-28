#include <iostream>
using namespace std;

int main() {
    int a[3][3];
    int sum = 0;

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    // Sum of main diagonal
    for (int i = 0; i < 3; i++) {
        sum += a[i][i];
    }

    cout << "Sum of main diagonal = " << sum;

    return 0;
}
