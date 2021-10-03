#include <iostream>
using namespace std;

void Euclide(int a, int b){
  if(a % b == 0){
    cout << "gcd(" << a << "," << b << ") = " << b;
  }
  else{
    return Euclide(b, a%b);
  }
}

int main() {
  int x,y;
  cout << "Inserte un numero: "; cin >> x;
  cout << "Inserte un numero: "; cin >> y;
  Euclide(x,y);
}