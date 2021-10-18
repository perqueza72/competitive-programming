#include <bits/stdc++.h>

using namespace std;

int main(){

  int n;
  cin >> n;
  vector<int> v(n);
  for(int i=0; i<n; i++){
    cin >> v[i];
  }

  for(int i=0; i<n; i++){
    
    if(i > 0){
      if(i < n-1) cout << min(v[i+1]-v[i],v[i]-v[i-1]);
      else cout << (v[i]-v[i-1]);
    }
    else cout << (v[i+1]-v[i]);
    cout << " ";
    cout << max(v[n-1]-v[i],v[i]-v[0]) << endl;
    
  }


  return 0;
}