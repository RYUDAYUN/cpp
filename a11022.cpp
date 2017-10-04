#include <cstdio>
int main(){
	int t;
	int a,b;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d %d",&a,&b);
		printf("Case #%d:%2d +%2d = %d\n",i,a,b,a+b);
	}
	return 0;
}