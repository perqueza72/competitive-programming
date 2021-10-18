#include <bits/stdc++.h>

using namespace std;

int main(){

  int n,t,k,d, panka, pankb, tr, tb;
  cin >> n >> t >> k >> d;

  tr = 0;
  tb = 0;
  panka = 0;
  pankb = 0;
  while(true){
    if(panka >= n)
      {
        cout << "NO" << endl;
        break;
      }
    else if(pankb >= n){
      cout << "YES" << endl;
      break;
    }

    if(tr%t == 0 && tr != 0){
      panka+=k;
      pankb+=k;
    }

    if(tr >= d){
    
      if(tb%t == 0 && tb != 0) 
        pankb+=k;
      tb++;
    }

    tr++;
  }

  return 0;
}