//Juan Manuel Badillo Serrano

//Se inicia el programa
#include <iostream>
using namespace std;
int main(){

  int x=1;
  while(x<=5){
    if(x%3==0){
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
