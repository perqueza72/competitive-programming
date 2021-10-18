#include <bits/stdc++.h>

using namespace std;

vector< vector <int> > grafo(110);
vector<bool> visited(110, false);
vector<int> topo;

void DFS(int pos){
  if(visited[pos]) return;
  visited[pos] = true;
  // cout << pos << endl;
  for(int i=0; i<grafo[pos].size(); i++){
    DFS(grafo[pos][i]);
  }
  topo.push_back(pos);
}

void topological_sort(int n){
  for(int i=1; i<=n; i++){
      DFS(i);
  }
}

int main(){

  int x,y,m,n;

  while(cin >> n >> m, n){
    
    
    for(int i=0; i<m; i++){
      cin >> x >> y;
      grafo[x].push_back(y);
    }

    topological_sort(n);
    
    while(topo.size()){
      
      cout << topo.back() << " ";
      visited[topo.back()] = false;
      topo.pop_back();
    }
    cout << "\n";

  }

  return 0;
}