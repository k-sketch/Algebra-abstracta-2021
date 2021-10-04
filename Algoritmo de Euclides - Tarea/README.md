# Descripcion del Programa

```C++
#include <iostream>
using namespace std;

int Ext_Euclide(int a, int b, int* c, int* d){
  //almacenan los resultados de las llamadas recursivas
  int c´,d´,e;
  if(a % b == 0){ //caso base
    *c = 0, *d = 1; 
    return b;
  }
  e = Ext_Euclide(b,a%b,&c´,&d´);
  //se actualizan los valores de c y d
  *c = d´;
  *d = c´-(a/b)*d´;
  //se envian los nuevos valores de c y d al caso base
  return e;
}

int main() {
  int x,y,z,f;
  cout << "Inserte el primer numero: "; cin >> x;
  cout << "Inserte el segundo numero: "; cin >> y;
  int e = Ext_Euclide(x,y,&z,&f); //llamada a la funcion
  cout << "gcd(" << x << "," << y << ")," << z << "," << f << " = " << e; //imprime el resultado
}
```