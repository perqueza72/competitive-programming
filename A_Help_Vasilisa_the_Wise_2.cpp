#include <bits/stdc++.h>

using namespace std;


vector<int> lados(6);


void lado(int a, int b, int c, int d){
  lados[0] = a+b;
  lados[1] = c+d;
  lados[2] = a+c;
  lados[3] = b+d;
  lados[4] = a+d;
  lados[5] = b+c;
  
}

int main(){

  vector<int> side(6);
  for(int i=0; i<6; i++){
    cin >> side[i];
  }
  bool puede = true;

  for(int i=1; i<=9; i++){
    for(int j=1; j<=9; j++){
      if(i == j) continue;
      for(int k=1; k<=9; k++){
        if(k == i || k == j) continue;
        for(int l=1; l<=9; l++){
          if(l == j || l == k || k == l || l == i) continue;

          lado(i,j,k,l);
          puede = true;
          for(int a = 0; a<6; a++){
            if(lados[a] != side[a]){
              puede = false;
              break;
            }
          }
          if(!puede) continue;
          

          cout << i << " " << j << endl << k << " " << l << endl;
          return 0;
        }
      }
    }
  }
  cout << "-1" << endl;


  return 0;
}