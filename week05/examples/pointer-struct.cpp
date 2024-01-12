#include <iostream>
#include <cstring>
using namespace std;

struct Student
{
    char name[4];
    int born;
    bool male; 
};

int main()
{
    Student stu = {"Yu", 2000, true};
    Student * pStu = &stu;//stu的地址赋给pStu

    cout << stu.name << " was born in " << stu.born 
         << ". Gender: " << (stu.male ? "male" : "female") << endl;

    strncpy(pStu->name, "Li", 4);
    //这里注意修改方法，两种修改方法
    pStu->born = 1911;
    (*pStu).born = 1949;
    pStu->male = false;

    cout << stu.name << " was born in " << stu.born 
         << ". Gender: " << (stu.male ? "male" : "female") << endl;


    printf(" C style Address of stu: %p\n", pStu); //C style
    cout << "Address of stu: " << pStu << endl; //C++ style 打印pStu中存储的地址(其实就是stu的地址)
    cout << "Address of stu: " << &stu << endl;
    cout << "The size of stu " << sizeof(stu) << endl;
    cout << "Address of member name: " << &(pStu->name) << endl;
    cout << "Address of member born: " << &(pStu->born) << endl;
    cout << "Address of member male: " << &(pStu->male) << endl;

    cout << "sizeof(pStu) = " << sizeof(pStu) << endl;
    
    return 0;
}