#include <iostream>
using namespace std;
int main(){
	int n;
	long long int d[100][2];
	cin>>n;
	d[1][1]=1;
	d[1][0]=0;
	d[2][0]=1;
	d[2][1]=0;
	for(int i=3;i<=n;i++){
		d[i][0]=d[i-1][0]+d[i-1][1];
		d[i][1]=d[i-1][0];
	}
	cout<<d[n][0]+d[n][1]<<endl;
	return 0;
}