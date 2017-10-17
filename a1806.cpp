#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n,s;
	cin>>n>>s;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	int min=1e9;
	int right=0,left=0;
	int sum = a[0];
	int ans;
	while(right<n){
		if(sum>=s){
			ans=right-left+1;
			if(ans<min)
				min=ans;
			sum-=a[left];

			left++;
		}
		else if(sum<s){
			right++;
			sum+=a[right];
		}
	}
	
	if(min==1e9)
		min=0;
	cout<<min<<endl;
	return 0;
}