#include <cstdio>
#include <iostream>
#define Min(a,b)(a>b?b:a)
using namespace std;
int main(){
	int n;
	int m[1000001];

	std::cin>>n;

	for(int i=2;i<=n;i++){
	m[i]=m[i-1]+1;
	if(i%2==0)
	m[i]=Min(m[i],m[i/2]+1);
	if(i%3==0)
	m[i]=Min(m[i],m[i/3]+1);
	}
	std::cout<<m[n]<<std::endl;

}