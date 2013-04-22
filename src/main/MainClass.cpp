/* 
 * File:   MainClass.cpp
 * Author: Think
 * 
 * Created on 2013年3月14日, 下午7:05
 */

#include "MainClass.hpp"

MainClass::MainClass(int age,string name) {
    this->age=age;
    this->name=name;
}

MainClass::~MainClass() {
}
int MainClass::getAge(){
    return age;
}
string MainClass::getName(){
    return name;
}

