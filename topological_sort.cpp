#include <bits/stdc++.h>

using namespace std;

int n;
vector<bool> visited(n);
deque<int> topo;
vector< vector <int> > grafo(n);

void DFS(int pos){
  visited[pos] = true;

  for(int i : grafo[pos]){
    DFS(i);
  }
  topo.push_back(pos);
}

void topological_sort(){
  for(int i=0; i<visited.size(); i++){
    if(!visited[i]){
      DFS(i);
    }
  }

  reverse(topo.begin(), topo.end());
}


int main(){  
  
  return 0;
}