// Voting Eligibility Checker
#include<iostream>
using namespace std;

int main() {
    int N;

    cin>>N;

    if(N>=18) {
        cout<<"Eligible"<<endl;
    }
    else {
        cout<<"Not Eligible"<<endl;
    }
    return 0;
}   