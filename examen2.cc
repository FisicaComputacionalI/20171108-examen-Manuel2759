//Juan Manuel Badillo Serrano

//Se inicia el programa
#include <iostream>
using namespace std;
int main(){

  int x=1;
  while(x<=5){
    //Esta condición hace que nunca entre. x=1 implica que el residuo de x%3 es 1, nunca 0. Como nunca entra nunca aumenta en 2, y el valor de x siempre es 1. Por eso tu programa no termina nunca y se queda parado "sin hacer nada", realmente está comparando infinitamente la igualdad 1%3==0 -> falso.
    //if(x%3==0){
    x=x+2;
    if(x%3!=0)
      cout<<"el valor de x es "<<x<<endl;
    x=x+2;
    }
    if(x>5)
      break;
  }
  return 0;
}
