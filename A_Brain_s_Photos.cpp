#include <bits/stdc++.h>

using namespace std;

int main(){

  bool colored = false;
  string s;
  int n, m;
  cin >>n >> m;

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin >> s;
      if(s[0] == 'Y' || s[0] == 'M' || s[0] == 'C') colored = true;
    }
  }

  if(colored) cout << "#Color" << endl;
  else cout << "#Black&White" << endl;

  return 0;
}