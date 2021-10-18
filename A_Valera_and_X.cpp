#include <bits/stdc++.h>

using namespace std;


int main(){

  bool puede = true;
  int n;
  string s, aux= "";
  cin >> n;
  cin >> s;
  aux+=s[0];
  aux+= s[1];
  if(s[0] == s[1]) puede = false;
  if(s[0] != s[n-1]) puede = false;
  for(int j=0; j<n; j++){  
    if (s[j] != aux[1] && j != 0 && j != (n-1)) 
      puede = false; 
  }
  for(int i=1; i<n; i++){
    cin >> s;
    for(int j=0; j<n; j++){
      
      if (s[j] != aux[1] && j != i && j != (n-1-i)) 
        puede = false;
      
      // cout << aux[0] << " " << aux[1] << endl;
    }
    if(s[i] != s[n-1-i] || s[i] != aux[0]) puede = false;
  }

  if(puede) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}