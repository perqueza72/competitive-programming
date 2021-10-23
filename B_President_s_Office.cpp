#include <bits/stdc++.h>

using namespace std;

char d;
int n, m;


vector<string > grafo;
set<char> dip;

void DFS(int x, int y){
  if(grafo[x][y] == '.') return;
  
  if(grafo[x][y] != d){
    dip.insert(grafo[x][y]);
    grafo[x][y] = '.';
    return;
  }
  grafo[x][y] = '.';

  if(x>0) DFS(x-1,y);
  if(x<n-1) DFS(x+1,y);
  if(y>0) DFS(x,y-1);
  if(y<m-1) DFS(x,y+1);
}

int main(){

  int sum=0, posX, posY;
  cin >> n >> m >> d;
  grafo.resize(n);
  for(int i=0; i<n; i++){
    cin >> grafo[i];
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if(d == grafo[i][j]){
        posX = i;
        posY = j;
        i+=11423;
        j+=12344;
        break;
      }
    }
  }

  DFS(posX,posY);
  
  cout << dip.size() << endl;
  return 0;
}