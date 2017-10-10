#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define MAX(a,b)(a>b?a:b)

int main(){
	int n,b;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	int ans=0;
	for(int i=0;i<n-1;i++){
		b=a[i]-a[i+1];
		if(b<0)
			b=-b;
		ans+=b;
	}
	int ans1=0;
	while(next_permutation(a.begin(),a.end())){
		ans1=0;
		for(int i=0;i<n-1;i++){
			b=a[i]-a[i+1];

			if(b<0)
				b=-b;
			ans1+=b;
		}
		ans=MAX(ans,ans1);
	}
	cout<<ans<<endl;
	return 0;
}
