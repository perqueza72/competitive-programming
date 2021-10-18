#include <bits/stdc++.h>

using namespace std;

int main(){

  int ans = 0, aux;
  string s;
  char pos = 'a';

  getline(cin, s);
  for(int i=0; i<s.length(); i++){
    
    aux = abs((int)(pos - s[i]));
    if(aux > 13)
      ans+=26-aux;
    else ans+=aux;

    pos = s[i];
  }

  cout << ans << endl;

  return 0;
}