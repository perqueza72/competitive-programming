#include <bits/stdc++.h>

using namespace std;

int main(){

  string s1, s2;
  cin >> s1 >> s2;
  
  int a;
  int b;
  for(int i=0; i<s1.length(); i++){
  a = tolower(s1[i]);
  b = tolower(s2[i]);
  if(a == b) continue;
  if(a>b) cout << 1 << endl;
  if(a<b) cout << -1 << endl;
  break;
  }
  if(a == b) cout << 0 << endl;

  return 0;
}