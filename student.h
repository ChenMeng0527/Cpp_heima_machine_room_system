//
// Created by Chem on 2022/12/28.
//

#ifndef CPP_HEIMA_MACHINE_ROOM_SYSTEM_STUDENT_H
#define CPP_HEIMA_MACHINE_ROOM_SYSTEM_STUDENT_H

#include "identity.h"
#include<iostream>
using namespace std;

class Student: public Identity{
public:
    Student();

    Student(int id,string name,string pwd);


    // 操作界面
    virtual void openMenu();

    //申请预约
    void applyorder();
    //查看自身的预约
    void showMyOrder();
    //查看所有预约
    void showAllOrder();
    //取消预约
    void cancellOrder();

    // 学生学号
    int m_Id;
};


#endif //CPP_HEIMA_MACHINE_ROOM_SYSTEM_STUDENT_H
