#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    short s = 0;
    cout << "sizeof(int)=" << sizeof(int) << endl;
    cout << "sizeof(i)=" << sizeof(i) << endl;
    cout << "sizeof(s)=" << sizeof(s) << endl;
    cout << "sizeof(long)=" << sizeof(long) << endl;
    cout << "sizeof(size_t)=" << sizeof(size_t) << endl;//注意下这个size_t
    //sizeof 不是一个函数，是一个操作符
    return 0;
}