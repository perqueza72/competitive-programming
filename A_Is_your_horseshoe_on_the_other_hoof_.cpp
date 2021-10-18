#include <bits/stdc++.h>


using namespace std;

int main(){

  int aux;
  set<int> a;
  for(int i=0; i<4; i++){
    cin >> aux;
    a.insert(aux);
  }
  cout << (4-a.size()) << endl;
  return 0;
}