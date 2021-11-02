#include <iostream>
#include <math.h>
using namespace std;

int main() {
  long int g, p, x, e, f;

  cout << "Ingresa g: "; cin >> g;
  cout << "Ingresa p: "; cin >> p;
  cout << "Ingresa x: "; cin >> x;
  cout << endl;

  if ( x < 0 || x > p){
    cout << "x debe ser menor a p y mayor a 1";
    return 0;
  }

  while( x <= p-1 && x > 0){
    for(int i = 0; i <= x; i++){
      e = pow(g,i);
      f = e % p;
      cout << g << "^" << i << " mod " << p << " = " << f;
      cout << endl;
    }
    break;
  }
} 