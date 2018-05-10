#include <iostream>
using namespace std;
void nhapMatran (int *pA, int n, int m)
{
    int i, j;
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            cout << "A[" << i + 1 << "][" << j + 1 << "] = ";
            cin >> *(pA + j + n * i);
        }
    }
}
void nhanMatran (int *pA, int pass, int n, int m)
{
    int i, j;
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            *(pA + j + n * i) = (*(pA + j + n * i)) * pass;
        }
    }
}
void inMatran (int *pA, int n, int m)
{
    int i, j;
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            cout << "A[" << i + 1 << "][" << j + 1 << "] = " << *(pA + j + n * i) << endl;
        }
    }
}
