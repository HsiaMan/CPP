#include <iostream>
using namespace std;

int main()
{
    int num = 100;
    int * p = NULL;
    p = &num;
    //int * p = &num
    int ** pp = &p;
    *(*pp) = 20;

    std::cout  << "num = " << num << endl;
    cout << "*p = " << *p << endl;
    cout << "The address of p is " << p << endl;
    cout << "**pp =" << **pp << endl;
    cout << "The address of pp is " << pp << endl;


    return 0;
}