#include <bits/stdc++.h>

using namespace std;

int n;
vector<bool> visited;
deque<int> topo;
vector< vector <int> > grafo;

void DFS(int pos){
  visited[pos] = true;

  for(int i : grafo[pos]){
    if(!visited[i]) DFS(i);
    
    
  }
  topo.push_back(pos);
}


int main(){
  int x, y, m;

  cin >> n >> m;
  int ans[n+1];
  grafo.resize(n+1);
  visited.assign(n+1, false);

  for(int i=1; i<=m; i++){
    cin >> x;
    for(int j=0; j<x; j++){
      cin >> y;
      grafo[i].push_back(y);
    }

  }


  for(int i=1; i<=n; i++){
    if(!visited[i]){
      DFS(i);
    }
  }
  reverse(topo.begin(), topo.end());

  ans[topo[0]] = 0;
  for(int i=1; i<n; i++){
    ans[topo[i]] = topo[i-1];
  }
  for(int i=1; i<=n; i++){
    cout << ans[i] << endl;
  }
  
  
  
  return 0;
}