#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
  set<char> cD;
  getline(cin,s);
  for(int i=0; i<s.length(); i++){
    if(cD.find(s[i]) == cD.end()) cD.insert(s[i]);
  }

  if(cD.size()%2){
    cout << "IGNORE HIM!" << endl;
  }
  else cout << "CHAT WITH HER!" << endl; 
}