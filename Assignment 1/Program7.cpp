//Leap Year Checker
#include <iostream>
using namespace std;
int main() {
    int N;
   
    cin >> N;

    if ((N % 4 == 0 && N % 100 != 0) || (N% 400 == 0)) {
        cout<<"leap year"<<endl;
    }
     else {
        cout<<"Not a leap year"<<endl;
    }

    return 0;
}