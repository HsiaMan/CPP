#include <iostream>
using namespace std;

int main()
{
    float f1 = 2.0f / 0.0f; //inf
    float f2 = 0.0f / 0.0f; //nan 不是一个数值
    cout << f1 << endl;
    cout << f2 << endl;
    return 0;
}
