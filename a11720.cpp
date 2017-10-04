#include <cstdio>
int main(){
	int n;
	int a,ans=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%1d", &a);
		ans+=a;
	}
	printf("%d",ans);
	return 0;
}