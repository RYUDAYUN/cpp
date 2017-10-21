#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> d(n+1);
	d[0]=1;
	d[2]=3;
	for(int i=4;i<=n;i=i+2){
		d[i]=d[i-2]*3;
		for(int j=i-4;j>=0;j-=2){
			d[i]+=d[j]*2;
		}
	}
	cout<<d[n]<<endl;
	return 0;
}