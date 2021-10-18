#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, ans=1;
  string s, sp;

  cin >> n;

  cin >> s;
  sp = s;
  for(int i=1; i<n; i++){
    cin >> s;
    if(s != sp){
      sp = s;
      ans++;
    }
  }

  cout << ans << endl;

  return 0;
}