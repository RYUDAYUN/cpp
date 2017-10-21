#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	vector<int> d(n);
	vector<int> d2(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++){
		d[i]=1;
		for(int j=0;j<i;j++){
			if(a[i]>a[j])
				d[i]=max(d[i],d[j]+1);
		}
	}
	for(int i=n-1;i>=0;i--){
		d2[i]=1;
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j])
				d2[i]=max(d2[i],d2[j]+1);
		}
	}
	int ans =0;
	for(int i=0;i<n;i++){
		int sum = d[i]+d2[i]-1;
		if(ans<sum)
			ans=sum;
	}
	cout<<ans<<endl;
	return 0;
}