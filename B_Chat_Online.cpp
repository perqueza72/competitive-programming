#include <bits/stdc++.h>

using namespace std;

int main(){
  
  int p,q,l,r,n1,n2, maxi = 0;
  cin >> p  >> q >> l >> r;
  bitset<1001> fijo = {0}, movido = {0};

  for(int i=0; i<p; i++){
    cin >> n1 >> n2;
    maxi = max(n2, maxi);
    for(int numero=n1; numero<=n2; numero++){
      fijo.set(numero);
    }
  }
  for(int i=0; i<q; i++){
    cin >> n1 >> n2;
    for(int numero=n1+l; numero<=n2+l; numero++){
      if(numero <= maxi) movido.set(numero);
      else break;
    }
  }

  int cont = 0;
  for(int i=0; i<=(r-l); i++){
    if((fijo&movido).any()) cont++;
    movido<<=1;
  }

  cout << cont << endl;


  return  0;
}