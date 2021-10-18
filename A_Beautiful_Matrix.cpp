#include <bits/stdc++.h>

using namespace std;

int main(){


  int n=5, x,y, aux, ans;

  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      cin >> aux;
      if(aux == 1){
        y = i;
        x = j;
        i = 20;
        break;
      }
    }
  }

  ans = abs(x-3) + abs(y-3);

  cout << ans << endl;

  return 0;
}