#include <cstdio>
#include <queue>
#include <vector>
using namespace std;
int main(){
	int dx[]={0,0,1,-1};
	int dy[]={1,-1,0,0};
	int m,n,x;
	int d[100][100];
	scanf("%d %d",&m,&n);
	queue<pair<int,int>> q;
	queue<pair<int,int>> next_queue;
	vector<vector<int>> a;
	for(int i=0;i<n;i++){
		vector<int> v;
		for(int j=0;j<m;j++){
			scanf("%1d",&x);
			v.push_back(x);
			d[i][j]=-1;
		}
		a.push_back(v);

	}
	q.push(make_pair(0,0));
	d[0][0]=0;
	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for(int k=0;k<4;k++){
			int nx = x+dx[k];
			int ny = y+dy[k];
			if(0<=nx&&nx<n&&0<=ny&&ny<m){
				if(d[nx][ny]==-1){
					if(a[nx][ny]==0){
						d[nx][ny]=d[x][y];
						q.push(make_pair(nx,ny));
					}else{
						d[nx][ny]=d[x][y]+1;
						next_queue.push(make_pair(nx,ny));
					}
				}
			}
		}
		if(q.empty()){
			q = next_queue;
			next_queue=queue<pair<int,int>>();
		}
	}
	printf("%d\n",d[n-1][m-1] );
	return 0;
}