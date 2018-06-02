#include <iostream>
#include <string>

using namespace std;
/*
 * 1.提示用户输入姓名
 * 2.接收用户的输入
 * 3.然后向用户问好，hello xxx
 * 4.告诉用户名字的长度
 * 5.告诉用户名字的首字母
 * 6.如果用户直接输入回车，那么告诉用户的输入为空
 * 7.如果用户输入的是imooc,那么告诉用户的角色是管理员
 */

int main(int argc, char *argv[])
{
    string name;
    cout << "Please input your name:";
    getline(cin, name);
    if (name.empty()) {
        cout << "input is null" << endl;
        return 0;
    }

    if (name == "imooc") {
        cout << "you are a administrator" << endl;
    }

    cout << "hello " + name << endl;
    cout << "your name length :" << name.size() << endl;
    cout << "your name firest letter is :" << name[0] << endl;

    return 0;
}
