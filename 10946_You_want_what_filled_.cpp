#include <bits/stdc++.h>

using namespace std;

vector<string > grafo;
int n, m;
int bol;

int BFS(int x, int y, int c){
  if(grafo[x][y] != c) return 0;
  if(grafo[x][y] == '.') return 0;
  grafo[x][y] = '.';

  if(x>0) bol+= BFS(x-1,y, c);
  if(x<n-1) bol+= BFS(x+1,y, c);
  if(y>0) bol+= BFS(x,y-1, c);
  if(y<m-1) bol+= BFS(x,y+1, c);
  return 1;
}


int main(){

  int c, cont = 0;

  while(cin >> n >> m, n){
    cont++;
    
    vector<pair<int,char> > resp;
    grafo.resize(n);

    for(int i=0; i<n; i++){
      cin >> grafo[i];
    }

    for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
        c = grafo[i][j];
        bol = 0;
        bol+= BFS(i,j,c);
        if(bol){
          resp.push_back(make_pair(0 - bol, c));
        }
      }
    }

    sort(resp.begin(), resp.end());
    
    cout << "Problem " << cont << ":" << "\n";
    for(auto u : resp){
      cout << u.second << " " << (abs(u.first)) << "\n";
    }
  }

  return 0;
}