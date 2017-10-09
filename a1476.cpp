#include <iostream>
using namespace std;
int main(){
	int e,s,m;
	cin>>e>>s>>m;
	int E=1,S=1,M=1;
	for(int i=1;;i++){
		if(e==E&&s==S&&m==M){
			cout<<i<<endl;
			break;
		}
		E++;S++;M++;
		if(E==16)
			E=1;
		if(S==29)
			S=1;
		if(M==20)
			M=1;
	}
	return 0;
}