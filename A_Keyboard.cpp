#include<bits/stdc++.h>

using namespace std;

int main(){

  string s[] = {"qwertyuiop","asdfghjkl;","zxcvbnm,./"};
  string r[] = {"wertyuiop ","sdfghjkl; ","xcvbnm,./ "};
  string l[] = {" qwertyuio"," asdfghjkl"," zxcvbnm,."};

  string cad;
  char c;

  cin >> c >> cad;

  if(c == 'R'){
    for(int i=0; i<cad.length(); i++){
      for(int j=0; j<3; j++){
        for(int k=0; k<10; k++){
          if(r[j][k] == cad[i]){
            cout << s[j][k];
            j = 3;
            k = 10;
          }
        }
      }
    }
  }else{
    for(int i=0; i<cad.length(); i++){
      for(int j=0; j<3; j++){
        for(int k=0; k<10; k++){
          if(l[j][k] == cad[i]){
            cout << s[j][k];
            j = 3;
            k = 10;
          }
        }
      }
    }
  }

  return 0;
}