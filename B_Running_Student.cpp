#include <bits/stdc++.h>

using namespace std;

double distance(double xo, double xf, double yo, double yf){

  return sqrt((xo-xf)*(xo-xf) + (yo-yf)*(yo-yf));
}

int main(){

  vector<int> parada(110);
  int ux, uy;
  double vb, ve, n;
  cin >> n >> vb >> ve;
  cin >> parada[0];
  for(int i=1; i<n; i++){
    cin >> parada[i];
  }
  cin >> ux >> uy;

  double minV, aux;
  int r = 0;
  minV = 1e9;
  // cout << minV << endl;
  for(int i=1; i<n; i++){
    aux = parada[i]/vb+distance(parada[i],ux,0,uy)/ve;
    if(minV >= aux){
      minV = aux;
      r = i;
    }
    // cout << "velocidad: " << minV << endl;
  }
  cout << (1+r) << endl;

  return 0;
}