#include <iostream>
using namespace std;

int main()
{
    char c1 = 'C';
    char c2 = 80;//P 
    char c3 = 0x50;
    //Chinese characters

    char16_t c4 = u'夏';//16位字符 u表示转成16位
    char32_t c5 = U'夏';//32位字符 U表示转成32位这个类型
    cout << c1 << ":" << c2 << ":"<< c3 << endl;
    cout << +c1 << ":" << +c2 << ":" << +c3 << endl;
    cout << c4 << endl;
    cout << c5 << endl;
    
    return 0;
}

