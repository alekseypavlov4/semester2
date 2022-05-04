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
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            sum += arr[i][j]*arr[i+1][j]+arr[i][j]*arr[i][j+1];
            cout << sum << " 1 " << arr[i][j] <<endl;
        }
    }
    
    for (int i = 0; i < n-2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j]*arr[n-1][j];
            cout << sum << " 2 " << arr[i][j]<<endl;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-2; j++)
        {
            sum += arr[i][j]*arr[i][n-1];
            cout << sum << " 3 " << arr[i][j]<<endl;
        }
    }
    
    for (int i = 0; i < n-1; i++)
    {
        int j = n-1;
        {
            sum += arr[i][j]*arr[i+1][j];
            cout << sum << " 4 "<< arr[i][j] <<endl;
        }
    }
    
    for (int j = 0; j < n-1; j++)
    {
        int i = n-1;
        {
            sum += arr[i][j]*arr[i][j+1];
            cout << sum << " 5 "<< arr[i][j] <<endl;
        }
    }
    
    sum += arr[n-1][n-1];
    
    cout << endl;
    cout << sum << endl;
    return 0;
}
