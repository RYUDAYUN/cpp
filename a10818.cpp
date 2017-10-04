#include <cstdio>
int main(){
	int n,a;
	int max,min;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		if(i==0){
			max=a;min=a;
		}else{
			max=(max>a?max:a);
			min=(min>a?a:min);
		}
	}
	printf("%d %d\n",min,max );
return 0;
}