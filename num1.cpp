#include <cstdio>
#include <iostream>
int main(int n)
{
    int a;
    int sum=0;
    
    std::cin>>a;
    
    while(1){
        sum=+(a%10);
        a/=10;
        if(a==0)
            break;
    }
    std::cout<<sum<<std::endl;
    return 0;
}
