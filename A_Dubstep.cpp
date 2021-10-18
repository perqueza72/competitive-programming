#include <bits/stdc++.h>

using namespace std;

int main(){

  bool start = false;
  string s, wub="";
  int aux;
  getline(cin,s);
  for(int i=0; i<s.length(); i++){
    aux = (s.substr(i,s.length()-i)).find("WUB");
    if(aux == 0){
      i+=2;
      if(start) wub+=" ";
      start = false;
    }
    else{
      wub+=s[i];
      start = true;
    }
    // if(wub == "WUB") continue;
    // else s = s.substr(s[i+3],s.length()-i-4);
  }
  cout << wub << endl;
  return 0;
}