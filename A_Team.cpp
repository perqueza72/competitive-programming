#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, sum=0, ans = 0, aux;
  cin >> n;
  for(int i=0; i<n; i++){
    sum = 0;
    for(int j=0; j<3; j++){
      cin >> aux;
      sum+=aux;
    }
    if(sum > 1) ans++;
  }

  cout << ans << endl;

  return 0;
}