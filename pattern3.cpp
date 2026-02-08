//Mirror Star pattern
#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;


    for (int i=1;i<=N;i+=2) {
        for (int s=1;s<=(N-i)/2;s++) {
            cout<< "\t";
        }
        for (int j=1;j<=i;j++) {
            cout<<"*\t";
        }
        cout<<endl;
    }

 
    for (int i=N-2;i>=1;i-=2) {
        for (int s=1;s<=(N-i)/2;s++) {
            cout<<"\t";
        }
        for (int j=1;j<=i;j++) {
            cout<<"*\t";
        }
        cout<<endl;
    }

    return 0;
}
