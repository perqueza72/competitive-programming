#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, m, ini;
  bool start;
  string s;
  set<int> v, aux;

  cin >> n >> m; 
  for(int i=0; i<n; i++){
    cin >> s;
    start = false;
    for(int j=0; j<m; j++){
      if(s[j] == 'G'){
        start = true;
        ini = j;
      }
      if(start){
        if(s[j] == 'S'){
          v.insert(j - ini);
          start = false;
          break;
        }
      }
    }
    if(start){
      cout << "-1" << endl;
      return 0;
    }
  }

  cout << v.size() << endl;

  // v.insert(0);
  // int del, cont = 0;
  // set<int>::iterator it;
  // while(v.size() > 1){
  //   it = v.begin();

  //   cout << "Añadir en aux" << endl;
  //   for(int i=0; i<v.size()/2; it++, i++){
  //     aux.insert(*it);
  //     cout << "i " << i << ": " << *it << endl;
  //   }

  //   cout  << "Restar" << endl;
  //   del = *it;
  //   for(int i=v.size()/2; i<v.size(); it++, i++){
  //     aux.insert(*it-del);
  //     cout << "i " << i << ": " << *it << endl;
  //   }

  //   cont++;
  //   v.clear();
  //   cout << "Contenido en aux" << endl;
  //   for(auto u : aux){
  //     v.insert(u);
  //     cout << u << " ";
  //   }
  //   cout << endl;
  //   cout << endl;
  //   aux.clear();
  // }

  // if(*(v.begin()) != 0) cont++;

  // cout << cont << endl;

  return 0;
}