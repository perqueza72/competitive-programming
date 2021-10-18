#include <bits/stdc++.h>

using namespace std;

int main(){

  int sT[255] ={0};
  string s;

  getline(cin, s);

  for(int i=0; i<s.length(); i++){
    if(s[i]>=97 && s[i]<=122)
      sT[s[i]]=1;
  }

  int sum=0;
  for(int i=0; i<255; i++){
    sum+=sT[i];
  }

  cout << sum << endl;
  return 0;
}