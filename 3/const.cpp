#include <iostream>

using namespace std;

void fun(const int &a, const int &b);

int main(int argc, char *argv[])
{
    int x = 3;
    int y = 5;

    fun(x, y);
    cout << x << endl;
    cout << y << endl;

    return 0;
}

void fun(const int &a, const int &b)
{
     a = 10;
     b = 20;
}
