#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, m, x,y;
  
  cin >> n;
  int wires[n+1];
  for(int i=1; i<=n; i++){
    cin >> wires[i];
  }
  cin >> m;
  for(int i=0; i<m; i++){
    cin >> x >> y;
    if(x-1 != 0) wires[x-1]+=y-1;
    if(x+1 <= n) wires[x+1]+=wires[x]-y;
    wires[x]=0;
  }

  for(int i=1; i<=n; i++){
    cout << wires[i] << endl;
  }

  return 0;
}