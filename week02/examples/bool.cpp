#include <iostream>
using namespace std;

int main()
{
    bool b1 = true;
    int i = b1;
    bool b2 = -256;//非零即1
    bool b = (-256 != 0);//better choice
	
    cout << "i=" << i << endl;
    cout << "b1=" << b1 << endl;
    cout << "b2=" << b2 << endl;
    cout << "b=" << b << endl;
    cout << true << endl;
    return 0;
}
