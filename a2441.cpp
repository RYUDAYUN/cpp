#include <cstdio>
int main(){
	int n;
	int m,x;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		x=i;
		m=n-i;
		while(x){
			printf(" ");
			x--;
		}
		while(m){
			printf("*");
			m--;
		}
		printf("\n");
	}
}