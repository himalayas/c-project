/* 
 * File:   main.cpp
 * Author: Think
 *
 * Created on 2013年3月14日, 下午6:38
 */

#include <iostream>
#include<vector>
#include<map>
#include<string>
#include "main/MainClass.hpp"
using std::cout;
using std::endl;
using std::vector;
using std::map;
using std::string;
int main(int argc, char** argv) {
    vector<int> is;
    map<string,int> m;
    m.insert(map<string,int>::value_type("1111",1111));
    is.push_back(12);
    is.push_back(233);
    cout<<m["222"]<<endl;
    cout<<m.size()<<endl;
    cout<<is.size()<<endl;
    MainClass *mc=new MainClass(12,"中国美国");
    cout<<mc->getName()<<endl;
    return 0;
}

