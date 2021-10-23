#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, m, a, b, space=0, maxi1=0, posm1=0, posm2=0;
  cin >> n >> m;
  int nodos[1001];
  vector<vector<int > > grafo(n+1);

  for(int i=0; i<1001; i++) nodos[i] = n;
  for(int i=0; i<m; i++){
    cin >> a >> b;
    nodos[a]--;
    nodos[b]--;
    grafo[a].push_back(b);
    grafo[b].push_back(a);
  }

  for(int i=1; i<=n; i++){
    //cout << nodos[i] << endl;
    if(nodos[i] == n){
      space = i;
      break;
    }
    if(nodos[i] >= maxi1){
      posm2 = posm1;
      posm1 = i;
      maxi1 = nodos[i];
    }
  }


  if(space){
    cout << (n-1) << endl;
    for(int i=1; i<=n; i++){
        if(i != space) cout << space << " " << i << endl;
    }
  }else{
    int g1 = grafo[posm1].size();
    int g2 = grafo[posm2].size();
    bool puede = true;
    cout << (2*(n-1)-g1-g2) << endl;
    
    for(int i=1; i<=n; i++){
      puede = true;
      if(posm1 == i) continue;
      for(int j=0; j<g1; j++){
        if(i == grafo[posm1][j]) puede = false;
      }

      if(puede) cout << posm1 << " " << i << endl;
    }


    for(int i=1; i<=n; i++){
      puede = true;
      if(posm2 == i) continue;

      for(int j=0; j<g2; j++){
        if(i == grafo[posm2][j]) puede = false;
      }

      if(puede) cout << posm2 << " " << i << endl;
    }    
  }


  return 0;
}