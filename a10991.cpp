#include <cstdio>
int main(){
	int n,f,x,z;
	scanf("%d",&n);
	f=1;
	for(int i=1;i<=n;i++){
		f=1;
		z=n-i;
		x=1;
		while(z){
			printf(" ");
			z--;
		}
		while(x<=i){
		if(f==0){
			printf(" ");
			f=1;
		}else{
			printf("*");
			x++;
			f=0;
		}
	}
	printf("\n");
	}
	return 0;

}