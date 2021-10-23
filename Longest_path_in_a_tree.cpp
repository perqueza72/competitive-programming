#include <bits/stdc++.h>

using namespace std;

vector< vector<int > > grafo;
vector<int> visited, dist;
int stage = 1;

void dfs(int pos, int tam){
  if(visited[pos] == stage) return;
  //cout << pos << endl;
  visited[pos] = stage;
  dist[pos]= tam;

  for(auto u: grafo[pos]){
    dfs(u, tam+1);
  }
}


int main(){

  int n, a, b;
  cin >> n;
  grafo.resize(n);
  visited.assign(n,0);
  dist.assign(n,0);

  for(int i=0; i<n; i++){
    cin >> a >> b;
    grafo[a-1].push_back(b-1);
    grafo[b-1].push_back(a-1);
  }

  dfs(0,0);
  int maxi=0, it=0;
  for(int i=0; i<n; i++){
    if(maxi< dist[i]){
      maxi = dist[i];
      it = i;
    }
    dist[i] = 0;
  }
  stage++;

  dfs(it,0);
  cout << (*max_element(dist.begin(), dist.end())) << endl;
  return 0;
}