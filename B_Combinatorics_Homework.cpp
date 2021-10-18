#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, cont, a[3], m;
  cin >> n;
  for(int i=0; i<n; i++){
    cont =0;
    cin >> a[0] >> a[1] >> a[2] >> m;

    for(int j=0; j<3; j++){
      cont+= a[j]/2;
      // cout << cont << endl;
    }
    if(cont < m) cout << "NO" << endl;
    else if(cont == m) cout << "YES" << endl;
    else{
      sort(a, a+3);
      if(a[2]-1 <= (a[1]+a[0])) cout << "YES" << endl;
      else cout << "NO" << endl;

    }
  }

  return 0;
}