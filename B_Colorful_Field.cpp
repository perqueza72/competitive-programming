#include <bits/stdc++.h>

using namespace std;

int main(){

  string resp[4] = {"Carrots", "Kiwis", "Grapes", "Waste"};
  int n=0, m=0, k=0, t=0, x=0, y=0;
  long long cont=0;

  cin >> n >> m >> k >> t;
  int grafo[n][m] = {0};
  for(int i=0; i<k; i++){
    cin >> x >> y;
    grafo[x-1][y-1] = 3;
  }


  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if(grafo[i][j] == 3) continue;
      grafo[i][j] = (cont%3);
      cont+=1;

    }
  }

  for(int i=0; i<t; i++){
    cin >> x >> y;
    cout << resp[grafo[x-1][y-1]] << endl;
  }


  return 0;
}