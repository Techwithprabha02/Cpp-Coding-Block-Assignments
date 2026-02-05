//binary to decimal
#include<iostream>
using namespace std;
int main() {
	int N;
	int decimal=0;
	int base=1;
	cin>>N;

    while(N>0) {
		int x=N%10;
		decimal=decimal+x*base;
		base=base*2;
		N=N/10;
	}

	cout<<decimal;
	return 0;
}