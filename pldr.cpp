#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int asd(int i, int k, int a);

int qwe(int a, int b, int x, int k, int i, int y, int n);

int pln(int a);

int main()
{
int a,b,x,k,i,y,n;
cout<<"Input: ";
cin>>a;
k = asd(i, k, a);
qwe(a,b,x,k,i,y,n);
pln(a);
return 0;
}

int qwe(int a, int b, int x, int k, int i, int y, int n)
{
i = 1;
n = k - 1;
while(k >= i){
float y = pow(10.0, n);
n = n - 1;
b = a % 10;
y = y*b;
x = x + y;
a = a/10;
i += 1;
}
cout<<x<<endl;
return 0;
}

int asd(int i, int k, int a)
{
k = 0;
i = a;
while(i != 0){
i = i/10;
k = k + 1;
}
return k;
}

int pln(int a)
{	    
    int temp = a;
    int b = 0;
    while (temp != 0)
    {
        b = b * 10 + temp % 10;
        temp /= 10;
    }
    if (a == b)
	{
        cout<<"pldr"<<endl;
    }
    else
	{
        cout<<"ne pldr"<<endl;
    }
    system ("pause");
    return 0;
}
