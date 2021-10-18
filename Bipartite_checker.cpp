#include <bits/stdc++.h>


using namespace std;

int main(){

  int n, m, x, y, cases;
  cin >> cases;

    cin >> n >> m;
    vector< vector <int> > grafo(n);

    for(int i=0; i<m; i++){ //Se rellena el grafo
      cin >> x >> y;
      grafo[x-1].push_back(y-1);
      grafo[y-1].push_back(x-1);
    }
    
    vector<int> side(n, -1);
    bool is_bipartite = true;
    queue<int> q;

    for(int i=0; i<n; i++){
      if(side[i] == -1){ //not visited
        side[i] = 0; //Visited and in first group
        q.push(i);

        while(q.size()){
          int v = q.front();
          q.pop();
          for(int u : grafo[v]){
            if(side[u] == -1){
              side[u] = side[v] ^ 1; // Ubicarlo en el grupo contrario si no se ha visitado.
              q.push(u); //Se añade el nuevo nodo para explorar.
            }else{
              is_bipartite &= side[u] != side[v];
            }
          }
          
        }
      }
    }


    if(is_bipartite){   
      cout << "Yes!" << endl;
    }
    else{
      cout << "No" << endl;
    }
  }
  return 0;
}