#include <iostream>
#include <vector>
#include <map>
using namespace std;
	int target,m,n;

void get_all_sum(vector<int> arr,map<int,int> &sum_map,int size){
	for(int i=1;i<size;i++){
		for(int j=0;j<size;j++){
			int sum =0;
			for(int k=1;k<=i;k++){
				if(j+k-1<size){
					sum+=arr[j+k-1];
				}else{
					sum+=arr[j+k-1-size];
				}
			}
			sum_map[sum]=sum_map[sum]+1;
		}
	}
	int sum = 0;
	for(int i=0;i<size;i++){
		sum+=arr[i];
	}
	sum_map[sum]=1;
	return;
}

int main(){
	cin>>target>>m>>n;
	vector<int> a(m);
	vector<int> b(n);

	map<int, int> a_sum,b_sum;

	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	get_all_sum(a,a_sum,m);
	get_all_sum(b,b_sum,n);
	int ans = a_sum[target]+b_sum[target];
	for(int i=1;i<target;i++){
		if(a_sum[i]&b_sum[target-i]){
			ans+=(a_sum[i]*b_sum[target-i]);
		}
	}
	cout<<ans<<endl;
	return 0;
}