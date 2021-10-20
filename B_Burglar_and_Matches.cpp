#include <bits/stdc++.h>

using namespace std;

int main(){

  long long n, m, resp = 0;
  pair<long long,long long> aux;
  vector<pair<long long,long long> > lista;
  cin >> n >> m;
  
  aux = make_pair(0,0);
  while(m--){
    cin >> aux.second >> aux.first;
    lista.push_back(aux);
  }

  sort(lista.begin(), lista.end());

  while(lista.size()){
    if(n>lista.back().second){
      n-= lista.back().second;
      resp+= lista.back().second * lista.back().first;
    }else{
      resp+= lista.back().first* n;
      break;
    }
    lista.pop_back();
  }
  cout << resp << endl;

  return 0;
}