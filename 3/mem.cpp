#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int *p = new int[1000];
    if(NULL == p) {
        return 1;
    }

    p[0] = 10;
    p[1] = 20;

    cout << p[0] << "," << p[1] << endl;

    delete [] p;
    p = NULL;
    return 0;
}
