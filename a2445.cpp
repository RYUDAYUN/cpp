#include <cstdio>
int main(){
	int n,x,y;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		x=i;
		y=n-i;
		while(x){
			printf("*");
			x--;
		}
		while(y){
			printf(" ");
			y--;
		}
		x=i;
		y=n-i;
		while(y){
			printf(" ");
			y--;
		}
		while(x){
			printf("*");
			x--;
		}
		
			
		printf("\n");
	}
	for(int i=n-1;i>0;i--){
		x=i;
		y=n-i;
		while(x){
			printf("*");
			x--;
		}
		while(y){
			printf(" ");
			y--;
		}
		x=i;
		y=n-i;
		while(y){
			printf(" ");
			y--;
		}
		while(x){
			printf("*");
			x--;
		}
		
			
		printf("\n");
	}
	return 0;
}