#include <bits/stdc++.h>

using namespace std;

int main(){

  
  int n, m, q, l, r;
  cin >> n;
  long long unOrd[n], ord[n], arr[n];

  cin >> arr[0];
  unOrd[0] = arr[0];
  for(int i=1; i<n; i++){
    cin >> arr[i];
    unOrd[i] = unOrd[i-1]+arr[i];
  }
  sort(arr, arr+n);
  ord[0] = arr[0];
  for(int i=1; i<n; i++){
    ord[i] = arr[i]+ord[i-1];
  }

  cin >> m;
  for(int i=0; i<m; i++){
    cin >> q >> l >> r;

    l--;
    r--;
    if(q == 1){
      if(l>0) cout << (unOrd[r]-unOrd[l-1]) << "\n";
      else cout << unOrd[r] << "\n";
    }else{
      cout << (ord[r]-ord[l]+arr[l]) << "\n";
    }
  }


  return 0;
}