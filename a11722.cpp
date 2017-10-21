#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	vector<int> d(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++){
		d[i]=1;
		for(int j=0;j<i;j++){
			if(a[j]>a[i])
			d[i]=max(d[i],d[j]+1);
		}
	}
	cout<<*max_element(d.begin(),d.end())<<endl;
	return 0;
}