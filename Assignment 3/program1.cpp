//Sum of odd placed and even placed digit
#include<iostream>
using namespace std;

int main() {
	int N;
	int odd=0;
	int even=0;
	int pos=1;

	cin>>N;
	while(N>0) {
	int x=N%10;
	if(pos%2==0) {
		even=even+x;
		
	}
	else {
		odd=odd+x;
	
	}
	N=N/10;
	pos++;
	}

	
	cout<<odd<<endl;;
	cout<<even<<endl;
	

  return 0;
}