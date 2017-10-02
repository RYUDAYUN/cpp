#include <cstdio>
#include <string>
#include <iostream>
#include <vector>
using namespace std;
#define MAX(a,b) (a>b?a:b)
vector<int> preprocessing(string v){
	int n = v.size();
	vector<int> pi(n);
	pi[0]=0;
	int j=0;
	for(int i=1;i<n;i++){
		while(j>0&&v[i]!=v[j])
			j=pi[j-1];
		if(v[j]==v[i]){
			pi[i]=j+1;
			j+=1;
		}else{
			pi[i]=0;
		}
	}
	return pi;
}
int main(){
	string s;
	int ans=0;
	cin>>s;
	string a;
	for (char c: s){
		a = c +a;
		vector<int> next = preprocessing(a);
		int m = next.size();
		for(int i=0;i<m;i++){
			if(ans<next[i])
				ans=next[i];
		}
	}
	cout<<ans<<endl;
	return 0;
	}