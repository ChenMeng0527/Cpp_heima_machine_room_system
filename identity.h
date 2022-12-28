//
// Created by Chem on 2022/12/28.
//

#ifndef CPP_HEIMA_MACHINE_ROOM_SYSTEM_IDENTITY_H
#define CPP_HEIMA_MACHINE_ROOM_SYSTEM_IDENTITY_H

#include<iostream>
using namespace std;

class Identity{
public:

    // 操作菜单  纯虚函数，使用多态技术使不同身份显示不同菜单
    virtual void openMenu();


    //用户名
    string m_Name;
    //密码
    string m_Pwd;

};



#endif //CPP_HEIMA_MACHINE_ROOM_SYSTEM_IDENTITY_H
