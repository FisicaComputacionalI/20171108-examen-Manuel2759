//Juan Manuel Badillo Serrano
//08 de Agosto de 1997
//Resultado es 13, de dar el numero 8
//Resultado es 20, de dar el numero 20
#include <iostream>
using namespace std;

int isPrime(int X){
  int flag=0; 
 
  for(int i=2; i<= (X/2) ; i++){
    if(X%i==0){
      flag=1;
      break;
    }
  }   
  return flag;

}

int main (){
  int S=12;
  int p=0;
  int flag=0;

  cout << "Dame un número entero" << endl;
  cin >> p;

  while (S!=0){ 
    cout << "ciclo S!=0, S " << S << ",p " << p << endl;
    while(p<S){
      cout << "ciclo p<S, S " << S << ",p " << p << endl;

      while(isPrime(p)==1){
	cout << "ciclo isPrime, S " << S << ",p " << p << endl;
	cout << p << " no es primo  " << endl;
	if((p%2)==0)
	  p=p+1;
	p=p+2;
	cout << "final ciclo isPrime, S " << S << ",p " << p << endl;
      }  
    
      S=S-p;
      p=p+2;
      cout << "final ciclo p<S, S " << S << ",p " << p << endl;
    }

    S=S-1;
    cout << "final ciclo S!=0, S " << S << ",p " << p << endl;
  }
  
  cout << " el valor de P es " << p << endl;
  return 0;
}
