#include <iostream>
using namespace std;
long long p[101]={0,1,1,1,2,2,3,4,5,7,9};
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		if(n>10){
			for(int i=11;i<=n;i++){
				p[i]=p[i-1]+p[i-5];
			}
		}
		cout<<p[n]<<'\n';
	}
	return 0;
}