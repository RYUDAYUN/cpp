#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;
int main(){
	int f,s,g,u,d;
	cin>>f>>s>>g>>u>>d;

	vector<int> ans(f+1,1e9);
	queue<int> q;
	ans[s]=0;
	q.push(s);
	while(!q.empty()){
		int now = q.front();
		q.pop();
		int next=now+u;
		if(next<=f){
			if(ans[next]>ans[now]+1){

			ans[next]=ans[now]+1;
			if(next==g)break;
			q.push(next);
			}
		}
		next=now-d;
		if(0<next){
			if(ans[next]>ans[now]+1){
			ans[next]=ans[now]+1;
			if(next==g)break;
			q.push(next);
		}
		}
	}
	if(ans[g]==1e9)
		cout<<"use the stairs"<<'\n';
	else
		cout<<ans[g]<<'\n';
	return 0;
}