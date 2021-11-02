#include <iostream>
#include <math.h>
using namespace std;

int f_primos(long int p){
  int a[200]; 
  for(int i = 2; i < p; i++){
    while( p % i == 0){
      a[i] = i;
      p /= i;
    }
  }
  return a[0];
}

int raiz_p(int p, int g, int x){
  int e, f;
  while( x <= p-1 && x > 0){
    for(int i = 0; i <= x; i++){
      e = pow(g,i);
      f = e % p;
    }
  }
  return f;
}

int m_raiz_p(int p){
  bool revisar;
  int phi = p-1;
  int x = f_primos(phi);
  for(int i = 2; i < p; i++){
    if(i % p == 1){
      revisar = false;
      for(int j = 0; j < sizeof(x); j++){
        if(raiz_p(i, phi/x, p)){
          revisar = true;
          break;
        }
        if(!revisar){
          return i;
        }
      }
    }
  }
}

int main() {
  long int p, g, x;

  cout << "Ingresa p: "; cin >> p;
  cout << "Ingresa x: "; cin >> x;
  cout << endl;

  if ( x < 0 || x > p){
    cout << "x debe ser menor a p y mayor a 1";
    return 0;
  }

  cout << "Menor raiz primitiva de " << p << " es " << m_raiz_p(p);

} 