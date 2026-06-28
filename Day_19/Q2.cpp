#include <iostream>
using namespace std;

int main() {
    int a[3][3], b[3][3], sub[3][3];

    cout << "Enter first matrix:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];

    cout << "Enter second matrix:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> b[i][j];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            sub[i][j] = a[i][j] - b[i][j];

    cout << "Subtraction of matrices:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << sub[i][j] << " ";
        cout << endl;
    }

    return 0;
}
