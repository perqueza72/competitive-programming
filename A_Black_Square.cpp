#include <bits/stdc++.h>

using namespace std;

int main(){

  int cal[5], sum=0;
  string s;
  for(int i=1; i<5; i++){
    cin >> cal[i];
  }

  getline(cin, s);
  getline(cin, s);
  for(int i=0; i<s.length(); i++){
    sum += cal[((s[i]-'0'))];
  }

  cout << sum << endl;
  return 0;
}