#include <iostream>
using namespace std;
int main(){
	int n;
	long long int d[101][10];
	cin>>n;
	for(int i=1;i<=9;i++)
		d[1][i]=1;
	d[1][0]=0;
	for(int i=2;i<=n;i++){
		for(int j=0;j<10;j++){
			if(j==0){
				d[i][j]=d[i-1][1];
			}else if(j==9){
				d[i][j]=d[i-1][8];
			}else{
				d[i][j]=d[i-1][j+1]+d[i-1][j-1];
			}
		}
	}
	int ans=0;
	for(int i=0;i<10;i++){
		ans+=d[n][i];
	}
	cout<<ans<<endl;
	return 0;
}