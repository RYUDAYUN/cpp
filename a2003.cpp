#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int ans = 0;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	int right=0,left=0;
	int sum=a[0];
	while(right<n){
		if(sum==m){
			ans++;
			right++;
			sum+=a[right];
		}
		if(sum<m){
			right++;
			sum+=a[right];
		}else if(sum>m){
			sum-=a[left];
			left++;
		}
	}
	cout<<ans<<'\n';
	return 0;
}