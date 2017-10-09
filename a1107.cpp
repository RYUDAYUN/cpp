#include <iostream>
using namespace std;
bool broken[10];

int possible(int c){
	if(c==0){
		if(broken[0])
			return 0;
		else
			return 1;
	}
	int len=0;
	while(c>0){
		if(broken[c%10])
			return 0;
		len++;
		c/=10;
	}
	return len;
}
int main(){
	int n,b,a;
	cin>>n;
	cin>>b;
	for(int i=0;i<b;i++){
		cin>>a;
		broken[a]=true;
	}
	int ans=n-100;
	if(ans<0)
		ans=-ans;
	for(int i=0;i<=1000000;i++){
		int c = i;
		int len;
		len=possible(c);
		if(len>0){
			int press = n-c;
			if(press<0)
				press=-press;
			if(ans>len+press)
				ans=len+press;
		}
	}
	cout<<ans<<endl;
	return 0;
}