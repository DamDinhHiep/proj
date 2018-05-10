#include <iostream>
#include <stdlib.h>
using namespace std;
#include "MaTran.h"
int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int pass;
        pass = atoi (argv[1]);
        if (pass == 2)
        {
            int n, m;
            cout << "Hello Nguyen Minh Hieu :)" << endl;
            cout << "Chuong trinh nhan ma tran voi doi so." << endl;
            cout << "Moi ban nhap kich co cua ma tran A[n][m]." << endl;
            cout << "Moi ban nhap n : ";
            cin >> n;
            cout << "Moi ban nhap m : ";
            cin >> m;
            int A[n][m];
            nhapMatran (&A[0][0], n, m);
            nhanMatran (&A[0][0], pass, n, m);
            cout << "Ma tran sau khi nhan voi doi so la : " << endl;
            inMatran (&A[0][0], n, m);
        }
    }
    else
    {
        cout << "Ban da nhap sai passwork !!!" << endl;
    }
    system ("pause");
    return 0;
}
