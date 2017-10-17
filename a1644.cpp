#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<bool> a(n+1);
	vector<int> v;
	for(int i=2;i<=n;i++){
		if(a[i]==false){
			v.push_back(i);
			for(int j=2;i*j<=n;j++)
				a[i*j]=true;
		}
	}
	int left=0,right=0;
	int sum=v.empty()?0:v[0];
	int ans=0;
	while(right<v.size()){
		if(sum==n){
			ans++;
			right++;
			sum+=v[right];

		}else if(sum>n){
			sum-=v[left];
			left++;
		}else if(sum<n){
			right++;
			sum+=v[right];

		}
	}


	
	cout<<ans<<endl;
	return 0;


}