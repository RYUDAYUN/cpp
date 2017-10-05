#include <cstdio>
int main(){
	int n,x,y;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		x=n-i;
		y=2*i-1;
		while(x){
			printf(" ");
			x--;
		}
		while(y){
			printf("*");
			y--;
		}
		printf("\n");
	}
	return 0;
}