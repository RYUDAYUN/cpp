#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
bool prime[10000];
bool c[10000];
int d[10000];
int change(int num,int index,int digit){
	if(index==0&&digit==0)return -1;
	string s = to_string(num);
	s[index] = digit+'0';
	return stoi(s);
}
int main(){
	for(int i=2;i<10000;i++){
		for(int j=2;j<10000;j++){
			if(i*j>10000)
				break;
			prime[i*j]=true;
		}
	}
	int t;
	cin>>t;
	int a,b;
	for(int i=0;i<t;i++){
		cin>>a>>b;
		memset(c,false,sizeof(c));
		memset(d,0,sizeof(d));
		queue<int> q;
		q.push(a);
		while(!q.empty()){
			int now = q.front();
			c[now]=true;
			q.pop();
			for (int i=0;i<4;i++){
				for(int j=0;j<=9;j++){
					int next = change(now, i, j);
					if(next != -1){
						if(prime[next]==false&&c[next]==false){
							q.push(next);
							d[next]=d[now]+1;
							c[next]=true;
						}
					}
				}
			}
		}
		cout<<d[b]<<'\n';
	}
	return 0;
}