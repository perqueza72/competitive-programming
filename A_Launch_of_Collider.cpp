#include <bits/stdc++.h>

using namespace std;


int main(){

  int n, ant, pos;
  int mini=1000000010;
  bool r;
  string s;
  cin >> n;
  cin >> s;

  cin >> ant;
  if(s[0] == 'R') r = true;
  else r = false;
  for(int i=1; i<s.length(); i++){
    cin >> pos;
    
    if(r && s[i] == 'L'){
      mini = min(pos-ant,mini);
      r=false;
    }
    if(s[i] == 'R') r=true;
    else r=false;
    ant = pos;
  }

  if(mini == 1000000010) cout << "-1" << endl;
  else cout << ((mini+1)/2) << endl;

  return 0;
}