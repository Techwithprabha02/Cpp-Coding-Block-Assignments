//Inverse a Number 
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long M, N;
        cin >> M >> N;

        long long aayush = 0;
        long long harshit = 0;
        int turn = 1;

        while (true) {

            if (turn % 2 == 1) {
                if (aayush + turn <= M) {
                    aayush = aayush + turn;
                } else {
                    cout << "Harshit" << endl;
                    break;
                }
            }
           
            else {
                if (harshit + turn <= N) {
                    harshit = harshit + turn;
                } else {
                    cout << "Aayush" << endl;
                    break;
                }
            }

            turn++;
        }
    }

    return 0;
}
