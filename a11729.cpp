#include <iostream>
using namespace std;
void go(int n,int from,int to){
	int middle = 6-from-to;
	if(n==0)
		return;
	go(n-1,from,middle);//맨마지막판을 제외하고 나머지 모든 판을 경유지로
	cout<<from<<" "<<to<<"\n";
	go(n-1,middle,to);//경유지에 남아있는 모든판을,목적지로
}
int main(){
	int n;
	cin>>n;
	cout<<((1<<n)-1)<<"\n";
	go(n,1,3);

	return 0;
}