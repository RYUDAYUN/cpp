#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int x,y,i,cnt=0;
	char date[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	std::cin>>x;
	std::cin>>y;
	for(int i=1;i<x;i++)
		cnt+=date[i-1];
	cnt+=y;

	switch(cnt%7)
	{
		case 0:
		std::cout<<"SUN"<<std::endl;
		break;
		case 1:
		std::cout<<"MON"<<std::endl;
		break;
		case 2:
		std::cout<<"TUE"<<std::endl;
		break;
		case 3:
		std::cout<<"WED"<<std::endl;
		break;
		case 4:
		std::cout<<"THU"<<std::endl;
		break;
		case 5:
		std::cout<<"FRI"<<std::endl;
		break;
		case 6:
		std::cout<<"SAT"<<std::endl;
		break;

	}
}