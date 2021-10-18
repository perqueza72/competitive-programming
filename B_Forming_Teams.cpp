#include <bits/stdc++.h>

using namespace std;

vector< vector< int> > grafo(110);
vector<int> visited(110, -1);


int main(){



  queue<int> q, q2;
  int n,m,x,y, cont = 0;
  cin >> n >> m;

  for(int i=0; i<m; i++){
    cin >> x >> y;
    
    grafo[x].push_back(y);
    grafo[y].push_back(x);

  }

  for(int i=1; i<=n; i++){
      if(visited[i] == -1){
        visited[i] = 0;
        q.push(i);

        while(q.size()){
          int v = q.front();
          q.pop();

          for(int u : grafo[v]){
            if(visited[u] == -1){
              visited[u] = visited[v] ^ 1;
              q.push(u);
            }else{
              if(visited[u] == visited[v]){
                cont++;
                q = q2;
                // break;
              }
            }

          }
        }
      }
      
  }

  if( (n-cont) % 2) cout << (cont+1) << endl;
  else cout << cont << endl;




  return 0;
}