#include <iostream>
#include <cstdlib>
#include<math.h>
using namespace std;

int main()
{
    double a,b,c, x1, x2,d;
    cout << "vvedi a"<<endl;
    cin>>a;
    cout << "vvedi b"<<endl;
    cin>>b;
    cout << "vvedi c"<<endl;
    cin>>c;
    d=(b*b) - (4*a*c);
    x1=(-b+(sqrt(d)))/(2*a);
    x2=(-b-(sqrt(d)))/(2*a);
    
    cout << "x1="<<x1<<endl;
    cout << "x2="<<x2<<endl;
	}

