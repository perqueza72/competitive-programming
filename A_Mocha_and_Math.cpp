#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, m, dato, aux;
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> m;

    cin >> dato;
    aux = dato;
    for(int j=1; j<m; j++){
      cin >> aux;
      dato &=aux;
    }
    cout << dato << endl;
  }

  

  return 0;
}