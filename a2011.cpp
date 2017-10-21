#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	int n;
	string s;
	cin>>s;
	n=s.size();
	s=" "+s;
	vector<int> d(n+1);
	d[0]=1;
	for(int i=1;i<=n;i++){
		int x=s[i]-'0';
		if(x>=1&&x<=9){
			d[i]+=d[i-1];
			d[i]%=1000000;
		}
		if(i==1)
			continue;
		if(s[i-1]=='0')
			continue;
		x=(s[i-1]-'0')*10+s[i]-'0';
		if(x>=10&&x<=26){
			d[i]=(d[i]+d[i-2])%1000000;
		}
	}
	cout<<d[n]<<endl;
	return 0;

}