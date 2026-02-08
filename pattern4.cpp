//pattern number ladder
#include<iostream>
using namespace std;

int main() {
	int N;
	cin>>N;
    int num=1;
   for(int i=0;i<=N;i++) {
	   
	   for(int j=0;j<i;j++)  {
		   cout<<num<<"\t";
		   num++;
	   }
	   cout<<endl;
   }
	return 0;
}