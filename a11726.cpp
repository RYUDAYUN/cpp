#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> d(n);
	d[0]=1;
	d[1]=2;
	for(int i=2;i<n;i++){
		d[i]=d[i-1]+d[i-2];
		d[i]%=10007;
	}
	cout<<d[n-1]<<endl;
	return 0;
}