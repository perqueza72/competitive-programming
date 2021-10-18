#include <bits/stdc++.h>

using namespace std;

int main(){
  
  int n, a, b;
  cin >> n;
  vector< set<int > > grafo(6);
  for(int i=0; i<n; i++){
    cin >> a >> b;
    grafo[b].insert(a);
    grafo[a].insert(b);
  }
  a = 0;
  b= 0;

  for(int i=1; i<6; i++){
    if(grafo[i].size() == 1) {b++;}
    else if(grafo[i].size() > 1) a++;
  }

  cout << a << endl << b << endl;
  if(a == 3 && b == 3) cout << "WIN" << endl;
  else cout << "FAIL" << endl;


  return 0;
}