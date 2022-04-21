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

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if((i == n-1) and (j != n-1))
            {
                sum += arr[i][j]*arr[0][j]+arr[i][j]*arr[i][j+1];
                cout << sum << " 2" << endl;
            }
            else if((i != n-1) and (j == n-1))
            {
                sum += arr[i][j]*arr[i][0]+arr[i][j]*arr[i+1][j];
                cout << sum << " 3" << endl;
            }
            else if((i == n-1) and (j == n-1))
            {
                sum += arr[i][j]*arr[i][0]+arr[i][j]*arr[0][j];
                cout << sum << " 4" << endl;
                sum += arr[i][j];
            }
            else
            {
                sum += arr[i][j]*arr[i+1][j]+arr[i][j]*arr[i][j+1];
                cout << sum << " 1" << endl;
            }
        }
    }
    cout << endl;
    cout << sum << endl;
    return 0;
}
