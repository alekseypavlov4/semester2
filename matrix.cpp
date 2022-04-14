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
    for (int i = 0; i < (n -1); i++)
    {
        for (int j = 0; j < (n -1); j++)
        {
            if ((i+1 == n) and (j+1 == n))
            {
                sum = sum + arr[i][j]*arr[i][j+1] + arr[i][j]*arr[i+1][j];
            }
            else if((i+1 == n) and (j+1 != n))
                {
                    sum = sum + arr[i][j]*arr[i][j+1] + arr[i][j]*arr[i+1][j] + arr[i][n];
                }
            else if((i+1 != n) and (j+1 == n))
            {
                sum = sum + arr[i][j]*arr[i][j+1] + arr[i][j]*arr[i+1][j] + arr[n][j];
            }
        }
    }
    sum += arr[n][n];
    cout << endl;
    cout << sum << endl;
    return 0;
}
