#include <cstdio>
int main(){
	int n,f,x,z;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		f=1;
		z=n-i;
		x=1;
		
		while(z){
			printf(" ");
			z--;
		}
		printf("* ");
		while(x<2*(i-1)-1){
			printf(" ");
			x++;
		}
		if(i>1){
		printf("*");
	}
			printf("\n");


	}

	

	for(int i=0;i<2*n-1;i++)
		printf("*");
	printf("\n");
	
	return 0;

}