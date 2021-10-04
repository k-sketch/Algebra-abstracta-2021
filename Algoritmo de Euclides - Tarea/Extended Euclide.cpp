#include <iostream>
using namespace std;

int Ext_Euclide(int a, int b, int* c, int* d){
  int c´,d´,e;
  if(a % b == 0){
    *c = 0, *d = 1;
    return b;
  }
  e = Ext_Euclide(b,a%b,&c´,&d´);
  *c = d´;
  *d = c´-(a/b)*d´;
  return e;
}

int main() {
  int x,y,z,f;
  cout << "Inserte un numero: "; cin >> x;
  cout << "\nInserte un numero: "; cin >> y;
  int e = Ext_Euclide(x,y,&z,&f);
  cout << "gcd(" << x << "," << y << ")," << z << "," << f << " = " << e;
}