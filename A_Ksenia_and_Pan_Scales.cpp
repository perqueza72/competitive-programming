#include <bits/stdc++.h>

using namespace std;

int main(){
  string s, nD, p[2] = {""};
  int cont = 0, pos = 0;
  cin >> s >> nD;

  for(int i=0; i<s.length(); i++){
    if(s[i] == '|'){
      pos++;
      continue;
    }
    p[pos]+=s[i];
    
  }

  while(cont < nD.length()){
    if(p[0].length() > p[1].length()){
    p[1] +=nD[cont];
    }else{
      p[0] +=nD[cont];
    }
    cont++;
  }
  

  if(p[0].length() == p[1].length()) cout << p[0] << '|' << p[1] << endl;
  else cout << "Impossible" << endl;

  return 0;
}