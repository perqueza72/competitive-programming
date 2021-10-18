#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, l[256] = {0};
  char c;
  cin >> n;
  for(int i=0; i<n; i++){
    c = getchar();
    l[tolower(c)] = 1;
  }cout << c << endl;

  int aux = 0;
  for(int i=0; i<256; i++){
    aux+=l[i];
  }

  if(aux == 26) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}