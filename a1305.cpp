#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
using namespace std;
vector<int> processing(string p){
	int n = p.size();
	vector<int> pi(n);
	pi[0]=0;
	int j=0;
	for(int i=1;i<n;i++){
		while(j>0&&p[i]!=p[j]){
			j=pi[j-1];
		}
		if(p[j]==p[i]){
			pi[i]=j+1;
			j=j+1;
		}else{
			pi[i]=0;
		}
	}
	return pi;
}
int main(){
	int n;
	string p;
	cin>>n>>p;
	vector<int> x = processing(p);
	cout<<n-x[n-1]<<endl;
	return 0;
}