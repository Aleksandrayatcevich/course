
 #include <iostream>
 using namespace std;
 
 int main()
 {
  int count; 
  double a,b; 
  cout << "Vvedite a"<<endl;
  cin >> a;
  cout << "Vvedite b"<<endl;
  cin >> b;
  cout << "Vibirite deistvie: 1-clojenie; 2-vichitanie; 3-ymnojenie; 4-delenie: "<<endl;
  cin >> count;
  switch (count)
  {
     case 1: 
     {
     cout << a << " + " << b << " = " << a + b << endl; 
     break;
     }
     case 2: 
     {
     cout << a << " - " << b << " = " << a - b << endl; 
     break;
     }
     case 3: 
     {
     cout << a << " * " << b << " = " << a * b << endl; 
     break;
     }
     case 4: 
     {
     cout << a << " / " << b << " = " << a / b << endl;
     break;
     }
     default: 
     cout << "Nepravilni vvod" << endl;
     }

}
