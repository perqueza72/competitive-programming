#include <bits/stdc++.h>

using namespace std;

vector<set<int > > grafo(256);
vector<bool> visited(256, true);
vector<int> topo;


void BFS(int pos){
  if(visited[pos]) return;
  visited[pos] = true;

  for(auto u : grafo[pos]){
    BFS(u);
  }

  topo.push_back(pos);
}

void topological(){

  for(int i=0; i<grafo.size(); i++){
    if(!visited[i]) BFS(i);


  }
}


int main(){

  string sAnt, s;

  cin >> sAnt;
  while(cin >> s, s != "#"){

    for(int i=0; i<min(sAnt.length(), s.length()); i++ ){
      visited[sAnt[i]] = false;
      if(sAnt[i] != s[i]){
        grafo[sAnt[i]].insert(s[i]);
        break;
      }
    }

    sAnt = s;
  }

  for(int i=0; i<sAnt.length(); i++){
    visited[sAnt[i]] = false;
  }

  topological();

  while(topo.size()){
    cout << ((char)topo.back());
    topo.pop_back();
  }
  cout << endl;

  return 0;
}