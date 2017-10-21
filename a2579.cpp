#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int d[301][3];
int main(){
	int n;
	cin>>n;
	vector<int> a(n+1);
	for(int i=1;i<=n;i++)
		cin>>a[i];
	d[1][0]=0;
	d[1][1]=a[1];
	d[1][2]=0;
	d[2][0]=a[1];
	d[2][1]=a[2];
	d[2][2]=a[1]+a[2];
	for(int i=3;i<=n;i++){
		d[i][0]=max(d[i-1][1],d[i-1][2]);
		d[i][1]=max(d[i-2][1]+a[i],d[i-2][2]+a[i]);
		d[i][2]=max(d[i-3][1]+a[i-1]+a[i],d[i-3][2]+a[i-1]+a[i]);
	}
	cout<<max(d[n][1],d[n][2])<<endl;
	return 0;
}