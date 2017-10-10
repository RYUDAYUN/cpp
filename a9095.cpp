#include <iostream>
#include <vector>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		vector<int> a(n);
		for(int j=0;j<n;j++){
			if(j==0)
				a[j]=1;
			else if(j==1)
				a[j]=2;
			else if(j==2)
				a[j]=4;
			else{
				a[j]=a[j-1]+a[j-2]+a[j-3];
			}
		}
		cout<<a[n-1]<<'\n';
	}
	return 0;
}