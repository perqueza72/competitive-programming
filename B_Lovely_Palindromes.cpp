#include <bits/stdc++.h>

using namespace std;

int main(){

  string s;
  cin >> s;
  cout << s;
  for(int i=0; i<s.length(); i++){
    cout << s[s.length()-1-i];
  }
  cout << endl;

  return 0;
}