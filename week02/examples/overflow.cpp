#include <iostream>
using namespace std;

int main()
{
    int a = 56789;
    int b = 56789;
    int c = a * b;// 数据溢出 int 是32位（满足32位的情况下） 四个byte 像老系统不一定是32位
    long   double d = a * b; 
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
    // unsigned int c1 = a * b; //danger operation
    // cout << "c1 = " << c1 << endl;
    return 0;
}
