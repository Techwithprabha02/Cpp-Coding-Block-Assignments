//GCD
#include<iostream>
using namespace std;

int main() {
    int N1;
	int N2;
    cin>>N1;
	cin>>N2;

    while(N2!=0) {
        int rem=N1%N2;
        N1=N2;
        N2=rem;
    }
    cout<<N1<<endl;
    return 0;
}