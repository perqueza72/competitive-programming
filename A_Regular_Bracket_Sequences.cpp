#include <bits/stdc++.h>

using namespace std;


int main(){

  int n,m;

  cin >> n;
  for(int i=0; i<n; i++){
    cin >> m;
    for(int j=0; j<m; j++){
      for(int k=0; k<j; k++){
        cout << "(";
      }
      for(int k=0; k<j; k++)
      cout << ")";
    }
    cout << "\n";
  }

  return 0;
}