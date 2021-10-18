#include <bits/stdc++.h>

using namespace std;

int main(){
  int t, n, aux;

  cin >> t;
  for(int i =0 ; i<t; i++){
    bool is_passed = false;
    cin >> n;
    
    for(int i=1; i<=n; i++){
      cin >> aux;
      if(aux == 1 && !is_passed){
        cout << (n+1) << " ";
        is_passed = true;
      }
      cout << i << " ";
    }
    if(!is_passed) cout << (n+1);

    cout << endl;

    
    
  }

  return 0;
}