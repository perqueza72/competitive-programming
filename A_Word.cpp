#include <bits/stdc++.h>

using namespace std;


int main(){

  string s, ans="";
  int l=0, u=0;
  getline(cin, s);
  for(int i=0; i<s.length(); i++){
    if(islower(s[i])) l++;
    else u++;
  }
  if(l < u){
    for(int i=0; i<s.length(); i++){
      ans+=toupper(s[i]);
    }
  }
  else{
    for(int i=0; i<s.length(); i++){
      ans+=tolower(s[i]);
    }
  }

  cout << ans<<endl;

  return 0;
}