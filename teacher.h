//
// Created by Chem on 2022/12/28.
//

#ifndef CPP_HEIMA_MACHINE_ROOM_SYSTEM_TEACHER_H
#define CPP_HEIMA_MACHINE_ROOM_SYSTEM_TEACHER_H

#include<iostream>;
using namespace std;

class Teacher {
public:
    Teacher();
    Teacher(int empid,string name,string pwd);

    virtual void openMenu();

    void  showAllOrder();//查看所有人的预约
    void  valiOrder();//审核预约
    int m_Empid;

};


#endif //CPP_HEIMA_MACHINE_ROOM_SYSTEM_TEACHER_H
