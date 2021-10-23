#include <bits/stdc++.h>

using namespace std;

vector< vector< char> > grafo(35);


void BFS(int x, int y){
  if(grafo[x][y] == 'X') return;
  if(grafo[x][y] == '#') return;
  grafo[x][y] = '#';

  if(x>0) BFS(x-1,y);
  if(x<grafo.size()-1) BFS(x+1,y);
  if(y>0) BFS(x,y-1);
  if(y<grafo[x].size()-1) BFS(x,y+1);
}

int main(){

  int n, pos = 0, cont;
  char c;
  string ending;

  bool pasar;
  pair<int,int> iniciar;
  vector<char> vacio;
  
  cin >> n;
  getchar();
  while(n--){
    
    grafo.assign(35,vacio);
    pasar = false;
    ending = "\n";
    while(true){
      c = getchar();
      
      if(c == '_'){
        ending+='_';
        pasar = true;
        continue;
      }
      if(c == '\n'){
        if(pasar){
          break;
        }
        pos++;
        continue;
      }
      if(c == '*') iniciar = make_pair(pos, grafo[pos].size());
      
      grafo[pos].push_back(c);
    }


    BFS(iniciar.first, iniciar.second);

    for(int i=0; i<pos; i++){
      for(auto u : grafo[i]){
        cout << u;
      }
      if(i != pos-1) cout << endl;
    }
    cout << ending << endl;
    pos = 0;
  }

  return 0;
}