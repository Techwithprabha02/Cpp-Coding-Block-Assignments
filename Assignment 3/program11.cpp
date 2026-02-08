//Chewbacca and number 
#include<iostream>
using namespace std;
int main() {
	string n;
	cin>>n;
	for(int i =0;i<n.length();i++){
		int d = n[i] - '0';
		int invert = 9-d;
		if(i==0 && invert == 0){
		}
		if(invert<d){
			n[i] = invert +'0';
		}
	}
	cout<<n;
	return 0;
}