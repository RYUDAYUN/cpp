#include <cstdio>
int main(){
	int n,b,s=0;
	char a[10];
	scanf("%d ",&n);
	for(int i=0;i<n;i++){
		scanf("%s",a);
		if(a[0]=='e'){
			s=0;
			continue;
		}else if(a[0]=='a'&&a[1]=='l'){
			s=(1<<20)-1;
			continue;
		}
		else if(a[0]=='a'){
			scanf("%d",&b);
			b--;
		s=(s|(1<<b));
	}
	else if(a[0]=='r'){
		scanf("%d",&b);
		b--;
		s=(s&~(1<<b));
	}
	else if(a[0]=='c'){
		scanf("%d",&b);
		b--;
		printf("%d\n",(s&(1<<b))>0?1:0);
	}
	else if(a[0]=='t'){
		scanf("%d",&b);
		b--;
		s=(s^(1<<b));
	}
}
}