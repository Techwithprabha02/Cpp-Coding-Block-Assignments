//print Reverse
#include<iostream>
using namespace std;
int main() {
	int N;
	int rev=0;

	cin>>N;

	while(N>0) {
		int rem=N%10;
        rev=rev*10+rem;
		N=N/10;

	}
	cout<<rev;

	return 0;
}