#include <iostream>
using namespace std;
int main(){
	int x;
	int n;
	int num;
	cin>>x;
	for(int i=1;i<x;i++){
		int c = (i*(i+1))/2;
		if(c>=x)
			break;
		n=i;
		num=x-c;
	}
	n++;
	int m,d;
	if(n%2){
		m=n-num+1;
		d=num;
	}else{
		d=n-num+1;
		m=num;
	}
	cout<<m<<'/'<<d<<'\n';
	return 0;
}