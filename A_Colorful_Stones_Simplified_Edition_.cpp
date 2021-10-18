#include <bits/stdc++.h>

using namespace std;

int main(){
  string s, t;
  char posC;
  int pos;
  getline(cin,s);
  getline(cin, t);

  
  pos = 0;
  posC = s[pos];
  
  for(int i=0; i<t.length(); i++){
    if(posC == t[i]){
      posC = s[pos+1];
      pos++;
    }
  }
  pos++;
  cout << pos << endl;

  return 0;
}