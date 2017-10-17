#include <iostream>
using namespace std;
int a[9][9];
bool check[9][9];//행 검사
bool check1[9][9];//열 검사
bool check2[9][9];//square검사
int square(int x,int y){
	return (x/3)*3+(y/3);
}
void go(int z){
	if(z==81){
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				cout<<a[i][j]<<' ';
			}
			cout<<'\n';
		}
	}
	int x = z/9;
	int y = z%9;
	if(a[x][y]!=0)
		go(z+1);
	else{
		for(int i=1;i<=9;i++){
			if(check[x][i]==0&&check1[y][i]==0&&check2[square(x,y)][i]==0){
				check[x][i]=check1[y][i]=check2[square(x,y)][i]=true;
				a[x][y]=i;
				go(z+1);
				check[x][i]=check1[y][i]=check2[square(x,y)][i]=false;
				a[x][y]=0;
			}
		}
	}
}
int main(){
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			cin>>a[i][j];
			if(a[i][j]!=0){
				check[i][a[i][j]]=true;
				check1[j][a[i][j]]=true;
				check2[square(i,j)][a[i][j]]=true;
			}
		}
	}
	go(0);
	return 0;

}