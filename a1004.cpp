#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int t,n;
	double x1,y1,x2,y2;
	double cx[50],cy[50],r[50];

	double a,b;
	int *ans;

	std::cin>>t;

	ans = new int[t];

	for(int i=0;i<t;i++){
	std::cin>>x1>>y1>>x2>>y2;
	std::cin>>n;
	ans[i]=0;
	for(int j=0;j<n;j++){
	std::cin>>cx[j]>>cy[j]>>r[j];
	}
	for(int j=0;j<n;j++){
	a=sqrt(pow(cx[j]-x1,2)+pow(cy[j]-y1,2));
	b=sqrt(pow(cx[j]-x2,2)+pow(cy[j]-y2,2));

	if(a<r[j]&&b>r[j])
	ans[i]++;
	else if(a>r[j]&&b<r[j])
	ans[i]++;
	}
	}
	for(int i=0;i<t;i++){
	std::cout<<ans[i]<<std::endl;
	}
return 0;
}