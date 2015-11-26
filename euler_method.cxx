#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int N=10;
  const double landa=-0.5;
  const double T=5*log(0.5)/landa;
  double dt=T/(N-1);
  double y, g, w, a;
  y=1;
  g=1;
  w =1;
 
  for(double t=dt; t<=T; t+=dt){
    y *= (1 + landa*dt);
    g /=(1-landa*dt);
    w *=(1+dt*landa/2)/(1-dt*landa/2);
    a=exp(landa*t);
    
    
    cout << t << "\t" << y << "\t" << g << "\t" << w << "\t" << a << endl;
  }
  
  
  return 0;
}