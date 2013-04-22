/* 
 * File:   ConnToMysql.cpp
 * Author: Think
 * 
 * Created on 2013年3月31日, 上午11:13
 */

#include "ConnToMysql.h"

ConnToMysql::ConnToMysql() {
}

ConnToMysql::ConnToMysql(const ConnToMysql& orig) {
}

ConnToMysql::~ConnToMysql() {
}
Connection* ConnToMysql::getConnection(){
    driver=get_driver_instance();
    conn=driver->connect("tcp://127.0.0.1:3306/casi", "root", "root");
    statment=conn->createStatement();
    res=statment->executeQuery("select * from people");
    while (res->next()){
        cout<<res->getString(1)endl;
        cout<<res->getString(2)endl;
    }
}

