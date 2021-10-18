#include <bits/stdc++.h>

using namespace std;

int main(){

  int n,b,d, nar, cont, waste;
  cin >> n >> b >> d;

  cont=0;
  waste = 0;
  for(int i=0; i<n; i++){
    cin >> nar;
    if(nar > b) continue;
    cont+=nar;
    if(cont > d){
      waste++;
      cont=0;
    }
  }

  cout << waste << endl;

  return 0;
}