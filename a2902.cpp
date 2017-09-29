#include <cstdio>
int main(){
	char c;
	int f=0;
	scanf("%c",&c);
	printf("%c",c);
	for(;scanf("%c",&c),c!=10;){
		if(f){
			printf("%c",c);
		}
		if(c=='-'){
			f=1;
		}else{
			f=0;
		}
		}

	return 0;
}