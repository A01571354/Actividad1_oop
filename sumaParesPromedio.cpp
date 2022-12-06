//
//  sumaParesPromedio.cpp
//  Prueba
//
//  Victor Sanchez
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int par = 0, impar=0;
    int promedio = 0;
    int contador = 0;

    for (i>0; i<=100; i++)
    {
        par = i%2;
        if (par == 0)
        {
            suma = suma +i;
            contador++;
        }
    }
    if (contador >0)
      {
        promedio = suma/contador;
      }

    for (int i =1; i<=10;i++){
      if(i%2 !=0){
        impar=impar+1;
      }
      else
          par=par+1;
    }
    
    cout << sumaPares( ) << endl;
    cout << promedio( ) << endl;
    
    return 0;
}

