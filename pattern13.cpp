//pattern inverted hour glass
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = N; i >= 0; i--) {
  
        for (int j = N; j >= i; j--) {
            cout << j << " ";
        }

        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "  ";
        }

      
        int val = i;
        if (i == 0) {
            val = 1; 
        }
        
        for (int j =val; j <= N; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

 
    for (int i = 1; i <= N; i++) {

        for (int j = N; j >= i; j--) {
            cout << j << " ";
        }

        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "  ";
        }

        for (int j = i; j <= N; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}