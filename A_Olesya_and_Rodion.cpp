#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, m;
  cin >> n >> m;
  if(m == 10){
    if(n == 1)cout << -1;
    else{
      cout << 1;
      for(int i=1; i<n; i++)
        cout << 0;
    }
  }
  else{
    for(int i=0; i<n; i++){
      cout << m;
    }
  }
  cout << endl;

  return 0;
}