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
    
    int nAge;
    std::cout<<"나이를 입력하세요."<<std::endl;
    std::cin>>nAge;
    
    std::string szJob;
    std::cout<<"직업을 입력하세요."<<std::endl;
    std::cin>>szJob;
    
    std::string strName;
    std::cout <<"이름을 입력하세요."<<std::endl;
    std::cin>>strName;
    
    std::cout<<"당신의 이름은"<<strName<<"이고,"<<"나이는"<<nAge<<"살이며,"<<"직업은"<<szJob<<"입니다."<<std::endl;
    
    return 0;
}
