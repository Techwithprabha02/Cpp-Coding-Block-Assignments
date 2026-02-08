//Check Prime
#include<iostream>
using namespace std;

int main() {
	int N;
	cin>>N;

	if(N<=1) {
		cout<<"Not Prime"<<endl;
		return 0;
	}
	
	for(int i=2;i*i<=N;i++) {
			if(N%i==0){
				cout<<"Not Prime"<<endl;

				return 0;
			}
		}
		cout<<"Prime"<<endl;
	
	
	return 0;
}