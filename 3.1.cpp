#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
    double a,b,c,d;
    cout << "vvedi a"<<endl;
    cin>>a;
    cout << "vvedi b"<<endl;
    cin>>b;
    cout << "vvedi c"<<endl;
    cin>>c;
    cout << "vvedi d"<<endl;
    cin>>d;
    
    if ((a>b) && (a>c) && (a>d))
		cout<<"a bolshe";
	else
		if ((b>a) && (b>c) && (b>d))
			cout<<"b bolshe";
		else
		if ((c>a) && (c>b) && (c>d))
			cout<<"c bolshe";
		else
			cout<<"d bolshe";

	return 0;
}


