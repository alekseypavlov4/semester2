#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a_1,b_1,a_2,b_2;
    int i = 1;
    while (i != 0)
    {
    cout << endl;
    cout << "stolbci matrix A: ";
    cin >> a_1;
    cout << "srtoki matrix A: ";
    cin >> b_1;
    cout << "stolbci matrix B: ";
    cin >> a_2;
    cout << "stroki matrix B: ";
    cin >> b_2;

    cout << endl;
    
    if (b_1 == a_2)
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
    int A[a_1][b_1];
    for(int i = 0; i < a_1; i++)
        {
        for(int j = 0; j < b_1; j++)
            {
            cin >> A[i][j];
            }
        }

    cout << endl;
    cout << "Vvedite elenti matrix B" << endl;
    int B[a_2][b_2];
    for(int i = 0; i < a_2; i++)
        {
        for(int j = 0; j < b_2; j++)
            {
            cin >> B[i][j];
            }
        }

    cout << endl;

    for(int i = 0; i < a_1; i++)
        {
        for(int j = 0; j < b_1; j++)
            {
            cout << setw(3) << A[i][j] << " ";
            if (j >= (b_1 -1))
                {
                cout << endl;
                }
            }
        }

    cout << endl;
    
    for(int i = 0; i < a_2; i++)
        {
        for(int j = 0; j < b_2; j++)
            {
            cout << setw(3) << B[i][j] << " ";
            if (j >= (b_2 -1))
                {
                cout << endl;
                }
            }
        }
        
    int q,b,a,sum,W,H;
	int mainMatrix[a_1][b_2];
	a=sum=0;
	W=0;
	H=0;
	i=0;
	q=0;
		while (q!=1)
		{
			b=0;
			sum=0;			
			for (int j = 0; j <a_2 ; j++)
			{
				sum+=A[a][b]*B[j][i];
				b+=1;
			}
			mainMatrix[W][H]=sum;
			H++;
			i++;
			if (i==b_2)
			{
				a++;
				i=0;
				W++;
				H=0;
			}
		else if (W==a_1 && H==b_2-1)
			{
				q=1;
			}
		}
	cout<<endl;
	for (int i=0; i<a_1; i++){
		for (int j=0; j<b_2; j++) {
			cout << setw(3) << mainMatrix[i][j] << " ";
		}

		cout<<endl;
	cout<<endl;
	}
	
	cout<<endl;
	return 0 ;
}
