#include <iostream>

using namespace std;

inline void fun(int i = 30, int j = 20, int k = 10);
inline void fun(double i, double j);

int main(int argc, char *argv[])
{
    fun(1.1, 2.2);
    fun(1, 2);

    return 0;
}

void fun(int i, int j, int k)
{
    cout << i << "," << j << "," << k << endl;
}

void fun(double i, double j)
{
    cout << i << "," << j << endl;
}


