#include <iostream>
using namespace std;
int main()
{
    int num1 = 110; //bad: uninitialized variable
    int num2 = 111; //bad: uninitialized variable
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
}
