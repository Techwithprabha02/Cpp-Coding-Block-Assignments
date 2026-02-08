//Is Armstrong Number 
#include<iostream>
using namespace std;

bool isArmstrong(int n) {
	int digit=0;
	int temp=n;
	while(temp>0) {
		int rem=temp%10;
		digit=digit+(rem*rem*rem);
		temp=temp/10;
}
if(digit==n) {
	return true;
}
else{

 return false;

}
}
int main() {
	int n;
	cin>>n;
    if(isArmstrong(n)){
		cout<<"true";
	}
	else {
		cout<<"false";
	}
	return 0;

}