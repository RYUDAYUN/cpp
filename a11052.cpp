#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	cin>>n;

	vector<int> a(n+1);
	vector<int> m(n+1);
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			m[i]=max(m[i],m[i-j]+a[j]);
		}
	}
	cout<<m[n]<<'\n';
	return 0;
}