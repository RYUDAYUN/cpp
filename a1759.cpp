#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
char x[5]={'a','e','i','o','u'};
int main(){
	int l,c;
	cin>>l>>c;
	vector<char> a(c);
	vector<int> v;
	for(int i=0;i<l;i++)
		v.push_back(1);
	for(int i=l;i<c;i++)
		v.push_back(0);
	
	
	for(int i=0;i<c;i++)
		cin>>a[i];
	sort(a.begin(),a.end());

	do{
		vector<char> ans;

		for(int i=0;i<c;i++){
			if(v[i]){
				ans.push_back(a[i]);
			}
		}
		int count = 0;
		for(int i=0;i<l;i++){
			for(int j=0;j<5;j++){
				if(ans[i]==x[j])
					count++;
			}
		}
		if(count>0&&(l-count)>1){
			for(int i=0;i<l;i++)
				cout<<ans[i];
			cout<<'\n';
		}
		
	}while(prev_permutation(v.begin(),v.end()));

	
	return 0;
}