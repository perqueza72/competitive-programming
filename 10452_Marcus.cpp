#include <bits/stdc++.h>

using namespace std;

int grafo[8][8];
int n, m, cont;
int xo, xf, yo, yf;

void DFS(int x, int y, bool s){
  
  grafo[x][y] = 0;
  if(y > 0 && grafo[x][y-1] == cont){
    if(s) cout << " ";
    s = true;
    cout << "forth";
    cont++;
    DFS(x,y-1, s);
  }
  if(x > 0 && grafo[x-1][y] == cont){
    if(s) cout << " ";
    s = true;
    cout << "left";
    cont++;
    DFS(x-1,y, s);
  }
  if(x < n-1 && grafo[x+1][y] == cont){
    if(s) cout << " ";
    s = true;
    cout << "right";
    cont++;
    DFS(x+1,y, s);
  }
  
  return;
  

}

int main(){

  int cases;
  string s, path= "@IEHOVA#";
  cin >> cases;

  for(int i=0; i<cases; i++){
    cin >> m >> n;

    for(int j=0; j<m; j++){
      cin >> s;
      for(int k=0; k<n; k++){
        grafo[k][j] = 0;
        for(int l=0; l<path.length(); l++){
          if(s[k] == path[l]){
            if(s[k] == '@'){ xo = k; yo = j;}
            if(s[k] == '#'){ xf = k; yf=j;}           
            grafo[k][j] = l;
            break;
          }
        }
        // cout << grafo[k][j];
      }
      // cout << endl;
    }

    cont = 1;

    DFS(xo,yo, false);
    cout << endl;
  }


  return 0;
}