#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<int> preprocessing(string p){
	int m = p.size();
	vector<int> pi(m);
	int j=0;
	pi[0]=0;
	for(int i=1;i<m;i++){
		while(j>0&&p[i]!=p[j]){
			j=pi[j-1];
		}
		if(p[i]==p[j]){
			j++;
			pi[i]=j;
		}else{
			pi[i]=0;
		}
	}
	return pi;
}
int kmp(string s, string p){
	vector<int> pi = preprocessing(p);
	int ans = 0;
	int m = p.size();
	int n = s.size();
	int j = 0;
	for(int i=0;i<n;i++){
		while(j>0&&s[i]!=p[j]){
			j = pi[j-1];
		}
		if(s[i]==p[j]){
			if(j==m-1){
				ans++;
				j=pi[j];
			}else{
				j++;
			}
		}
	}
	return ans;

}
int main(){
	string s,p;
	getline(cin,s);
	getline(cin,p);
	cout<<kmp(s,p)<<"\n";
	return 0;
}