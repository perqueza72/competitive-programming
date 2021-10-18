#include <bits/stdc++.h>

using namespace std;

int main(){

  string s, sAuxAnt = "", sAuxDesp = "";
  bool dos = false, uno = false;
  int datos[5] = {0};
  getline(cin, s);
  for(int i=0; i<s.length(); i++){
    
    if(s[i] == '1') sAuxAnt += '1';
    else{
      if(s[i] == '2') dos = true;
      if(dos){
        sAuxDesp += s[i];
      }else{
        if(s[i] == '0') sAuxAnt = '0' + sAuxAnt;
      }
    }
  }

  cout << sAuxAnt << sAuxDesp << endl;

  return 0;
}