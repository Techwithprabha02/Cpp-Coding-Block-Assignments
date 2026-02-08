//Pattern Triangle
#include<iostream>
using namespace std;
int main(){
    int N;
	cin>>N;
  
    for(int i = 1; i<=N;i++){
        for(int j=1;j<=N-i;j++){
            cout<<"\t";
        }
        for(int k = i;k<=2*i-1;k++){
            cout<<k<<"\t";
        }
        for(int k= 2*i-2;k>=i;k--){
            cout<<k<<"\t";
        }
        cout<<endl;
    }
    return 0;
}