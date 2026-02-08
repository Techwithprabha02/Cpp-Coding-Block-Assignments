//hallow diamond pattern
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            if (i == 0 || i == N - 1) {
                cout << "*\t";
            }
            else if (j == 0 || j == N - 1) {
                cout << "*\t";
            }
            else if ((i == 1 || i == N - 2) && (j == 1 || j == N - 2)) {
                cout << "*\t";
            }
            else {
                cout << "\t";
            }
        }
        cout << endl;
    }

    return 0;
}
