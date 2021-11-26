#include <bits/stdc++.h>

using namespace std;

int main(){

  bool subida = true, bajada = false;
  int n, dA, d, p1, p2, maxi = 0, menor, comp;
  cin >> n;
  cin >> dA;
  comp = -1;
  menor = dA;
  p1 = 1;
  p2 = 1;
  for(int i=1; i<n; i++){
    cin >> d;

    if(d<dA){

      if(bajada){
        cout << "no";
        return 0;
      }

      
      if(subida){
        // if(comp == 2000000000)
        p1 = i;
      }
      maxi = dA;
      subida = false;

    }else if(!subida){

      subida = true;
      menor = dA;
      if(maxi > d || menor < comp){
        cout << "no";
        return 0;
      }

      p2 = i;
      bajada = true; 
    }
    if(subida){
      // cout << comp << endl;
      comp = dA;
    }
    dA = d;
  }

  if(!subida){
    p2 = n;
    menor = d;
    // cout << menor << "<" << comp << endl;
    if(menor < comp){
      cout << "no";
      return 0;
    }
  }

  cout << "yes" << endl;
  cout << p1 << " " << p2;

  return 0;
}