//count digit
#include<iostream>
using namespace std;
int main() {
	
	int N;
	int Digit;

	int count=0;

	cin>>N;
	cin>>Digit;

	while(N>0) {
		int x=N%10;
		if(Digit==x) {
			count++;
		}
		
		N=N/10;
	}
	cout<<count;
	return 0;

}