#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, k, x, y;

  cin >> n >> k;
  int copias[n], nodos[n];
  vector<vector<int> > grafo(n);

  for(int i=0; i<k; i++){
    cin >> x >> y;
    x--;
    y--;
    grafo[x].push_back(y);
    grafo[y].push_back(x);
  }

  for(int i=0; i<grafo.size(); i++){
      nodos[i] = grafo[i].size();
  }

  bool seguir, start;
  int cont = 0;
  while(true){
    seguir = false;
    
    for(int u : nodos){
      if(u == 1){
        seguir = true;
      }
      // cout << u << " ";
    }
    // cout << endl;

    if(!seguir) break;
    start = false;
    copy(nodos, nodos+n, copias);
    for(int i=0; i<n; i++){
      if(copias[i] == 1){
        if(!start){
          cont++;
          start = true;
        }

        nodos[i]--;
        for(int j=0; j<grafo[i].size(); j++){
          if(nodos[grafo[i][j]]>0) nodos[grafo[i][j]]--;
        }
      }
    }
  }

  cout << cont << endl;



  return 0;
}