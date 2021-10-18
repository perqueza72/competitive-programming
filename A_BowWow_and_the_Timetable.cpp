#include <bits/stdc++.h>

using namespace std;

int main(){

  int r;
  string s;
  cin >> s;
  r = s.length();
  for(int i=1; i<s.length(); i++){
    if(s[i] == '1'){
      r++;
      break;
    }
  }
  cout << (r/2) << endl;

  return 0;
}