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

void Inverse(int a, int n){
  int c, d;
  int f = Ext_Euclide(a, n, &c, &d);
  if(f != 1){
    cout << "No tiene inverso multiplicativo";
  }
  else{
    int g = (c % n + n) % n;
    cout << "Su inverso multiplicativo es: " << g;
  }
}

int main() {
  int a,n,c,d;
  cout << "Inserte el primer numero: "; cin >> a;
  cout << "Inserte el segundo numero: "; cin >> n;
  Inverse(a,n);
  return 0;
}
