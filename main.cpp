#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int n;
    srand(time(NULL));
    const int N = 2;
    int mtrx[N] = {-1, 1};
    cout << "Razmer matrix: ";
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            arr[i][j] = mtrx[rand()%2];
            cout << setw(3) << arr[i][j] << " ";
            if (j >= (n -1))
            {
                cout << endl;
            }
        }
    }
    return 0;
}
