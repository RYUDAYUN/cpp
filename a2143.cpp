#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
	int t,n,m;
	cin>>t>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>m;
	vector<int> b(m);
	for(int i=0;i<m;i++)
		cin>>b[i];
	map<int,int> a_sum,b_sum;
	for(int i=0;i<a.size();i++){
		int sum=a[i];
		a_sum[sum]++;
		for(int j=i+1;j<a.size();j++){
			sum+=a[j];
			a_sum[sum]++;
		}
	}
	long long int ans =0;
	for(int i=0;i<b.size();i++){
		int sum = b[i];
		if(a_sum.count(t-sum))
			ans+=a_sum[t-sum];
		for(int j=i+1;j<m;j++){
			sum+=b[j];
			if(a_sum.count(t-sum))
				ans+=a_sum[t-sum];
		}
	}
	cout<<ans<<'\n';
	return 0;
}