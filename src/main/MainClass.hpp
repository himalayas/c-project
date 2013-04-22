/* 
 * File:   MainClass.hpp
 * Author: Think
 *
 * Created on 2013年3月14日, 下午7:05
 */
#ifndef MAINCLASS_HPP
#define	MAINCLASS_HPP
class MainClass {
public:
    MainClass(int,char*);
    virtual ~MainClass();
    int getAge();
    char* getName();
private:
    int age;
    char*  name;

};

#endif	/* MAINCLASS_HPP */

