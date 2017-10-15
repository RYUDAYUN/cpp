#include <iostream>
#include <queue>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
bool check[10000];
char how[10000];
int from[10000];
int main(){
	int t,a,b;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>a>>b;
		memset(check,false,sizeof(check));
		memset(how,0,sizeof(how));
		memset(from,0,sizeof(from));
		check[a]=true;
		from[a]=-1;
		queue<int> q;
		q.push(a);
		while(!q.empty()){
			int now = q.front();
			q.pop();
			int next = (now*2)%10000;
			if(check[next]==false){
				q.push(next);
				check[next]=true;
				from[next]=now;
				how[next]='D';
			}
			next=now-1;
			if(next==-1)next=9999;
			if(check[next]==false){
				q.push(next);
				check[next]=true;
				from[next]=now;
				how[next]='S';
			}
			next = (now%1000)*10+now/1000;
			if(check[next]==false){
				q.push(next);
				check[next]=true;
				from[next]=now;
				how[next]='L';
			}
			next = now/10+(now%10)*1000;
			if(check[next]==false){
				q.push(next);
				check[next]=true;
				from[next]=now;
				how[next]='R';
			}
		}
		string ans = "";
		while(b!=a){
			ans+=how[b];
			b=from[b];
		}
		reverse(ans.begin(),ans.end());
		cout<<ans<<'\n';
	}
	return 0;
}