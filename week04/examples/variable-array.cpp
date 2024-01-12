#include <iostream>
using namespace std;
int main()
//变长数组,其实只是用index设置的变长的数组
{
    int num_array1[5] = {0,1}; // fixed length array, initialized to {0,1,0,0,0}  
    cout << "sizeof(num_array1) = " << sizeof(num_array1) << endl;

    int len = 0;
    while ( len < 10 )
    {
        int num_array2[len]; //variable-length array
        cout << "len = " << len;
        cout << ", sizeof(num_array2)) = " << sizeof(num_array2) << endl;
        len ++;
    }
}