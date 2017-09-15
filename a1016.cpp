#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	long long min,max,x;
	long long cnt=0;
	int numbers[1000001]={0,};
	std::cin>>min>>max;
	for(long long j=2;j*j<=max;j++){
		x= min/(j*j);
		if (min%(j*j)!=0)
			x++;
		while(x*(j*j)<=max){
			numbers[x*(j*j)-min]=1;
			x++;
		}
	}
	for(int i=0;i<=max-min;i++){
		if(numbers[i]==0)
			cnt++;
	}
	std::cout<<cnt<<endl;
	return 0;
}