#include <iostream>
using namespace std;

int main() {

    int select = 0;
    while (true)
    {
        cout << "*******************************************" << endl;
        cout << "********** 欢迎使用机房预约系统！**********" << endl;
        cout << "************* 请选择登陆身份 **************" << endl;
        cout << "************* 1、学生 *********************" << endl;
        cout << "************* 2、教师 *********************" << endl;
        cout << "************* 3、管理员 *******************" << endl;
        cout << "************* 4、退出 *********************" << endl;
        cout << "*******************************************" << endl;
        cout << endl;

        cout << "请输入你的选择：";
        cin >> select;

        switch (select)
        {
            case 1:   //选择学生
                break;
            case 2:  //选择老师
                break;
            case 3:  //选择管理员
                break;
            case 0:  //退出系统
                cout<<"欢迎下次使用"<<endl;
                return 0;
                break;
            default:
                cout << "输入有误，请重新选择" << endl;
                system("pause");
                system("cls");
                break;
        }


    }
    system("pause");
    return 0;

}
