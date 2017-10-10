#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define MIN(a,b)(a>b?b:a)
int main(){
	int n,ans=2147483647;
	cin>>n;
	int a[10][10];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	}

	vector<int> p(n);
	vector<int> b(n+1);
	for(int i=0;i<n;i++)
		p[i]=i;
	int c;
	int f1=1;

		do{
			for(int j=0;j<n+1;j++){
				if(j==n)
					b[j]=p[0];
				else{
					b[j]=p[j];
				}
			}
			c=0;
			for(int j=0;j<n;j++){
				if(a[b[j]][b[j+1]]==0){
					f1=0;
					break;
				}
				else{
					f1=1;
				c+=a[b[j]][b[j+1]];
			}
			}
			if(f1==0){
				continue;
			}else
				ans=MIN(ans,c);
		}while(next_permutation(p.begin()+1,p.end()));
		cout<<ans<<endl;
		return 0;
}