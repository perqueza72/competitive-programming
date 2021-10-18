#include <bits/stdc++.h>

using namespace std;


int main(){

  int n, dato;
  cin >> n;
  int a[n+1];
  for(int i=1; i<=n; i++){
    cin >> dato;
    a[dato] = i;
  }

  for(int i=1; i<=n; i++){
    cout << a[i] << " ";
  }
  cout << endl;

  return 0;
}