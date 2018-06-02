#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "请输入一个整数";

    int i;
    cin >> i;

    cout << oct << i << endl;
    cout << dec << i << endl;
    cout << hex << i << endl;

    cout << "请输入一个bool值" << endl;
    bool x = false;

    cin >> x;

    cout << boolalpha << x << endl;

    return 0;
}
