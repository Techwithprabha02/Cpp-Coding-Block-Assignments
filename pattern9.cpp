//pattern mountain
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
      
        for (int j = 1; j <= i; j++) {
            cout << j << "\t";
        }

        for (int k = 1; k <= 2 * (n - i) - 1; k++) {
            cout << "\t";
        }

        int start = (i == n) ? i - 1 : i;
        for (int j = start; j >= 1; j--) {
            cout << j << "\t";
        }

        cout << endl;
    }
    return 0;
}