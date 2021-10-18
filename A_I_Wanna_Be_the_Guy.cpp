#include <bits/stdc++.h>

using namespace std;


int main(){
  int n, m, aux;
  cin >> n;
  vector<int> a(n+1,0);
  a[0] = 1;
  cin >> m;
  for(int i=0; i<m; i++){
    cin >> aux;
    a[aux] = 1;
  }
  cin >> m;
  for(int i=0; i<m; i++){
    cin >> aux;
    a[aux] = 1;
  }

  for(int i = 1; i<=n; i++){
    if(a[i] == 0){
      cout << "Oh, my keyboard!" << endl;
      return 0;
    }
  }
  cout << "I become the guy." << endl;

  return 0;
}