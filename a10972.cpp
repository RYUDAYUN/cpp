#include <iostream>
#include <vector>
using namespace std;
bool next_permutation(vector<int> &a, int n) {
    int i = n-1;
    while (i > 0 && a[i-1] >= a[i]) {
        i -= 1;
    }
    if (i <= 0) {
        return false; 
    }
    int j = n-1;
    while (a[j] <= a[i-1]) {
        j -= 1;
    }
    swap(a[i-1], a[j]);
    j = n-1;
    while (i < j) {
        swap(a[i], a[j]);
        i += 1; 
        j -= 1;
    }
    return true;
}
bool prev_permutation(vector<int> &a,int n){
	int i=n-1;
	while(i>0&&a[i-1]<=a[i])
		i--;
	if(i<=0)
		return false;
	int j=n-1;
	while(a[j]>=a[i-1])
		j--;
	swap(a[i-1],a[j]);
	j=n-1;
	while(i<j)
{
	swap(a[i],a[j]);
	i++;
	j--;
}return true;
}

int main(){
	int n,c,x=1,y;
	cin>>n;
	vector<int> a(n);
	cin>>c;
	
	if(c==1){
		cin>>y;
		for(int i=1;i<=n;i++){
		a[i-1]=i;
	}
		for(int i=0;i<y-1;i++)
			next_permutation(a,n);
		for(int i=0;i<n;i++)
			cout<<a[i]<<' ';
		cout<<'\n';
	}else if(c==2){
		for (int i=0;i<n;i++)
			cin>>a[i];
		while(prev_permutation(a,n)){
			x++;
		}
		cout<<x<<endl;

	}

	
	return 0;
}