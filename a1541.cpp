#include <cstdio>
int main(){
	int i =0;
	int n,a;
	char c;

	for(scanf("%d",&n);scanf("%c",&c),c!=10;){
		if(c=='-')
			i=1;
		scanf("%d",&a);
		if(i) n-=a;
		else n+=a;
	}
	printf("%d",n );
}