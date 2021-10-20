#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, garden[1010], maxi = 0, cont = 1, aux=1;
  bool subida = true;
  cin >> n;

  cin >> garden[0];
  for(int i=1; i<n; i++){
    cin >> garden[i];
    if(garden[i-1] < garden[i]){
      if(subida){
        cont++;
      }else{
        maxi = max(cont,maxi);
        cont = aux+1;
        subida = true;
        // cout << "garden: " << garden[i] << endl;
        // cout << "auxiliar: " << aux << endl;
      }
      aux = 1;
    }else if(garden[i-1] == garden[i]){
      cont++;
      aux++;
    }
    else{
      subida = false;
      cont++;
      aux = 1;
    }
  }

  maxi = max(cont, maxi);

  cout << maxi << endl;




  return 0;
}