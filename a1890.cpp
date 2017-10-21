#include <iostream>
#include <vector>
using namespace std;
long long int d[101][101];
int a[101][101];
int n;

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	d[0][0]=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int m = a[i][j];
			if(m==0)
				break;
			if((i+m)>-1&&(i+m)<n){
				d[i+m][j]+=d[i][j];
			}
			if((j+m)>-1&&(j+m)<n){
				d[i][j+m]+=d[i][j];
			}
		}
	}
	cout<<d[n-1][n-1]<<endl;
	return 0;
}