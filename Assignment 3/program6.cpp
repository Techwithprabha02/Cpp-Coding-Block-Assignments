//LCM
#include<iostream>
using namespace std;
int main() {
	int N1;
	int N2;

	cin>>N1;
	cin>>N2;
    int max;

    if(N1>N2) {
        max=N1;
    }
    else {
        max=N2;
    }

    while(true) {
        if(max%N1==0 && max%N2==0) {
            cout<<max;
            break;
        }
        max++;
    }

    return 0;
}
