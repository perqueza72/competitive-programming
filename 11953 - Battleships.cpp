#include <bits/stdc++.h>

using namespace std;


int n;
string grafo[100];

bool DFS(int x, int y, bool exist){
  if(grafo[x][y] == '.') return false;
  if(grafo[x][y] == 'x') exist = true;
  grafo[x][y] = '.';

  if(x>0)   exist|= DFS(x-1,y,exist);
  if(x<n-1) exist|= DFS(x+1,y,exist);
  if(y>0)   exist|= DFS(x,y-1,exist);
  if(y<n-1) exist|= DFS(x,y+1,exist);

  return exist;
}


int main(){

  int cases, ship;
  
  cin >> cases;
  for(int i=0; i<cases; i++){
    cin >> n;
    for(int j=0; j<n; j++){
      cin >> grafo[j];
    }

    ship = 0;
    for(int j=0; j<n; j++){
      for(int k=0; k<n; k++){
        if(DFS(j,k,false)) ship++;
      }
    }

    cout << "Case " << (i+1) << ": " << ship << endl;
  }

  


  return 0;
}