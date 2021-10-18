#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, ans=0;
  char c, ca;
  cin >> n;

  cin >> c;
  ca = c;
  for(int i=1; i<n; i++){
    cin >> c;
    if(c == ca){
      ans++;
    }
    ca = c;
  }
  cout << ans << endl;

  return 0;
}