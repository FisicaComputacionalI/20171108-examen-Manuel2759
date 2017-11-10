//Juan Manuel Badillo Serrano
//Programa de calcula la velocidad
#include <iostream>
using namespace std;
int main()
{
  float t=0;
  float d=0;
  float v=0;
  cout<<"Dame el tiempo"<<endl;
  cin>>t;
  cout<<"Dame la distancia"<<endl;
  cin>>d;
  v=d/t;
  cout<<"La velocidad es "<<v<< " m/s"<<endl;
  return 0;
}
