//Nth fibonacci
#include<iostream>
using namespace std;
int main() {
	int N;
	cin>>N;
	int n;
	int a=0,b=1;
	
    for(int i=1;i<N;i++) {
		
		n=a+b;
		a=b;
		b=n;
}
	
	cout<<n;
	return 0;
}