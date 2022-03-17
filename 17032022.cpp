#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,x,k,i,y,n;
    cout<<"Input: ";
	cin>>a;
    k = 0;
    i = a;
    while(i != 0){
        i = i/10;
        k = k + 1;
    }
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
    cout<<x;
return 0;
}
