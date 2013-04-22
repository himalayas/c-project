/* 
 * File:   ConnToMysql.h
 * Author: Think
 *
 * Created on 2013年3月31日, 上午11:13
 */
#ifndef CONNTOMYSQL_H
#define	CONNTOMYSQL_H
#include<iostream>
#include<string>
#include<stdlib.h>
#include "../3th_commons/mysql_conn_cpp/include/mysql_connection.h"
#include "../3th_commons/mysql_conn_cpp/include/cppconn/driver.h"
#include "../3th_commons/mysql_conn_cpp/include/cppconn/statement.h"
#include "../3th_commons/mysql_conn_cpp/include/cppconn/resultset.h"
using namespace sql;
using namespace std;
class ConnToMysql {
public:
    ConnToMysql();
    ConnToMysql(const ConnToMysql& orig);
    virtual ~ConnToMysql();
    Connection* getConnection();
    void closeConnection();
private:
    Connection* conn;
    Driver* driver;
    Statement* statment;
    ResultSet* res;

};

#endif	/* CONNTOMYSQL_H */

