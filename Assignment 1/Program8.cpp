//Multile of 3 or 5
#include<iostream>
using namespace std;
int main() {
    int N;
    cin>> N;

    if (N % 3 == 0 || N % 5 == 0) {
        cout <<"Multiple" << endl;
    } 
    else {
        cout <<"Not a multiple" << endl;
    }

    return 0;
}