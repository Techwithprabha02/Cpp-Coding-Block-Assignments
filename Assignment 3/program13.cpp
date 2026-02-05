//Armstrong Number
#include<iostream>
using namespace std;
int main() {
	int N1;
	int N2;

	cin>>N1;
	cin>>N2;

	for(int i=N1;i<=N2;i++) {
		int temp=i;
		int digit=0;
		while(temp>0){
		int rem=temp%10;
		digit=digit+(rem*rem*rem);
        temp=temp/10;
		}
		if(digit==i) {
			cout<<i<<endl;
		}
	}

	return 0;
}