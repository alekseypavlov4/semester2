#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a,b,c,d;
    int i = 1;
    while (i != 0)
    {
    cout << endl;
    cout << "stolbci matrix A: ";
    cin >> a;
    cout << "srtoki matrix A: ";
    cin >> b;

    cout << "stolbci matrix B: ";
    cin >> c;
    cout << "stroki matrix B: ";
    cin >> d;

    cout << endl;

    if ((a == d) or (b == c) or (a == b == c == d))
        {
        cout << "Uslovie vipolneno" << endl;
        i = 0;
        }
    else
        {
            cout << "Uslovie ne vipolneno, povtorite snova" << endl;
        }
    }
    
    cout << "Vvedite elenti matrix A" << endl;
    int A[a][b];
    for(int i = 0; i < b; i++)
        {
        for(int j = 0; j < a; j++)
            {
            cin >> A[i][j];
            }
        }

    cout << endl;
    cout << "Vvedite elenti matrix B" << endl;
    int B[c][d];
    for(int i = 0; i < d; i++)
        {
        for(int j = 0; j < c; j++)
            {
            cin >> B[i][j];
            }
        }

    cout << endl;

    for(int i = 0; i < b; i++)
        {
        for(int j = 0; j < a; j++)
            {
            cout << setw(3) << A[i][j] << " ";
            if (j >= (a -1))
                {
                cout << endl;
                }
            }
        }

    cout << endl;

    for(int i = 0; i < d; i++)
        {
        for(int j = 0; j < c; j++)
            {
            cout << setw(3) << B[i][j] << " ";
            if (j >= (c -1))
                {
                cout << endl;
                }
            }
        }

    return 0;
}
