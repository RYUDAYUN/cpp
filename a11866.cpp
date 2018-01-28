#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	queue<int> q;
	for(int i=1;i<=n;i++)
		q.push(i);
	int cnt = 1;
	vector<int> ans;
	while(!q.empty()){
		int k = q.front();
		q.pop();
		if(cnt==m){
			ans.push_back(k);
			cnt=1;
		}else{
			q.push(k);
			cnt++;
		}
	}
	cout<<"<";
	for(int i=0;i<n;i++){
		if(i<n-1){
		cout<<ans[i]<<", ";
	}
	else{
		cout<<ans[i];
	}
	}
	cout<<">"<<"\n";
	return 0;
}