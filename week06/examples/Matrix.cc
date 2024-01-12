#include <iostream>
using namespace std;

struct Matrix
{
    int rows;
    int cols;
    float * pData;
};
Matrix  crate_matrix(int rows, int cols);


int main()
{
    Matrix  pMat = crate_matrix(4,5);
    cout << "pMat" << &pMat << endl;
    return 0;

}
Matrix  crate_matrix(int rows, int cols)
{
    Matrix * p = new Matrix{rows,cols};
    p->pData = new float[p->rows * p->cols];
    return *p;
}