#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//  usleep(time);
// Le va a servir para que no se imprima todo de una vez, si no poco a poco, lo mete dentro del for que imprime

int main(int argc, char const *argv[]) {

  int filas = atoi(argv[1]);
  int columnas = atoi(argv[2]);

  void ClearScreen()
    {
    cout << string( 100, '\n' );
    }
    
  cout << filas << "\n";


return 0;
}

//se compila así: g++ archivo.cpp -o nombre
