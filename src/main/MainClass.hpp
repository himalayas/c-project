/* 
 * File:   MainClass.hpp
 * Author: Think
 *
 * Created on 2013年3月14日, 下午7:05
 */

#ifndef MAINCLASS_HPP
#define	MAINCLASS_HPP
#include<string>
using std::string;
class MainClass {
public:
    MainClass(int,string);
    virtual ~MainClass();
    int getAge();
    string getName();
private:
    int age;
    string  name;

};

#endif	/* MAINCLASS_HPP */

