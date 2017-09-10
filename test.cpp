//
//  main.cpp
//  HelloCpp
//
//  Created by 류다윤 on 2017. 9. 8..
//  Copyright © 2017년 류다윤. All rights reserved.
//
#include <iostream>
#include <string>
#include <cstdio>

int main(int argc, const char * argv[]) {
    int a;
    int sum=0;
    
    std::cin>>a;
    
    while(1){
        sum+=(a%10);
        a/=10;
        if(a==0)
            break;
    }
    std::cout<<sum<<std::endl;
    return 0;
}
