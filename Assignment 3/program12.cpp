//Simple Output
#include<iostream>
using namespace std;

int main() {
	int N;
	int sum=0;

	while(cin>>N) {
		

		if(sum+N<0) 
			break;
			sum+=N;
			cout<<N<<endl;
		
	}

	return 0;
}