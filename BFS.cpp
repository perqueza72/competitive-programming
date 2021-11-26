#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > grafo;
vector<bool> seen;

void bfs(int origin){

  deque<int> q;
  q.push_back(origin);
  while(q.size()){

    int value = q.front();
    q.pop_front();
    if(seen[value]) continue;

    seen[value] = true;
    for(int i=0; i<grafo[value].size(); i++){
      if(seen[grafo[value][i]]) continue;
      q.push_back(grafo[value][i]);
    }
  }
}

int main(){

  int n, k, a, b;
  vector<int> vacio;

  cin >> n >> k;
  grafo.assign(n,vacio);
  seen.assign(n,false);
  for(int i=0; i<k; i++){
    cin >> a >> b;
    grafo[a].push_back(b);
  }

  bfs(0);

  return 0;
}
