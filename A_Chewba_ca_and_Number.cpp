#include <bits/stdc++.h>

using namespace std;

int main(){

  string s, sf="";
  cin >> s;
  for(int i=0; i<s.length(); i++){
    if(s[i] > '4') 
      sf+= to_string(9-(int)(s[i]-'0'));
    else sf+=s[i];
  }
  bool start = false;
  for(int i=0; i<sf.length(); i++){
    if(!start && sf[i] == '0'){
      cout << 9;
      start = true;
      continue;
    }
    cout << sf[i];
    start = true;
  }

  return 0;
}